/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 09:08:50 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/15 13:10:15 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < RECIPE_SIZE; i++)
		_recipes[i] = NULL;
	for (int i = 0; i < MAX_CAP; i++)
		_createdMateria[i] = NULL;
	cout << "MateriaSource created" << endl;
};

MateriaSource::MateriaSource(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < MAX_CAP; i++)
			_createdMateria[i] = NULL;
		for (int i = 0; i < RECIPE_SIZE; i++)
		{
			if (other._recipes[i] != NULL)
			{
				_recipes[i] = other._recipes[i]->clone();
				this->addCreatedMateria(_recipes[i]);
			}
			else
				_recipes[i] = NULL;
		}
	}
	cout << "MateriaSource created from copy constructor" << endl;
};

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MAX_CAP; i++)
	{
		if (_createdMateria[i] != NULL)
		{
			delete _createdMateria[i];
			_createdMateria[i] = NULL;
		}
	}
	cout << "MateriaSource destroyed" << endl;
};

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < RECIPE_SIZE; i++)
		{
			if (other._recipes[i] != NULL)
				_recipes[i] = other._recipes[i]->clone();
		}
	}
	return *this;
};

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < RECIPE_SIZE; i++)
	{
		if (_recipes[i] == NULL)
		{
			_recipes[i] = materia;
			this->addCreatedMateria(_recipes[i]);
			cout << "materia of type: " << materia->getType() << " learned." << endl;
			return;
		}
	}
	delete materia;
	cout << "No empty slots in recipes." << endl;
	return;
};

AMateria *MateriaSource::createMateria(string const &type)
{
	AMateria *newMateria;

	for (int i = 0; i < RECIPE_SIZE; i++)
	{
		if (_recipes[i] != NULL)
		{
			if (_recipes[i]->getType() == type)
			{
				newMateria = _recipes[i]->clone();
				newMateria->addSource(this);
				if (addCreatedMateria(newMateria))
				{
					cout << "materia of type: " << type << " created." << endl;
					return newMateria;
				}
				else
				{
					delete newMateria;
					cout << "Materia Source drained." << endl;
					return NULL;
				}
			}
		}
	}
	cout << "No recipes for that type." << endl;
	return NULL;
};

bool MateriaSource::addCreatedMateria(AMateria *materia)
{
	for (int i = 0; i < MAX_CAP; i++)
	{
		if (_createdMateria[i] == NULL)
		{
			_createdMateria[i] = materia;
			return true;
		}
	}
	return false;
};

void MateriaSource::removeFromCreated(AMateria *materia)
{
	for (int i = 0; i < MAX_CAP; i++)
	{
		if (_createdMateria[i] == materia)
		{
			_createdMateria[i] = NULL;
			return;
		}
	}
	return;
};
