/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 09:08:50 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/15 12:25:20 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < RECIPE_SIZE; i++)
		_recipes[i++] = NULL;
	cout << "MateriaSource created" << endl;
};

MateriaSource::MateriaSource(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < RECIPE_SIZE; i++)
		{
			if (other._recipes[i] != NULL)
			{
				_recipes[i] = other._recipes[i];
			}
			i++;
		}
	}
	cout << "MateriaSource created from copy constructor" << endl;
};

MateriaSource::~MateriaSource()
{
	cout << "MateriaSource destroyed" << endl;
};

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < RECIPE_SIZE; i++)
		{
			if (other._recipes[i] != NULL)
			{
				_recipes[i] = other._recipes[i];
			}
			i++;
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
			cout << "materia of type: " << materia->getType() << " learned." << endl;
			return;
		}
		i++;
	}
	cout << "No empty slots in recipes." << endl;
	return;
};

AMateria *MateriaSource::createMateria(std::string const &type)
{
	AMateria *newMateria;

	for (int i = 0; i < RECIPE_SIZE; i++)
	{
		if (_recipes[i] != NULL)
		{
			if (!_recipes[i]->getType().compare(type))
			{
				newMateria = _recipes[i]->clone();
				cout << "materia of type: " << type << " created." << endl;
				return newMateria;
			}
			else
				i++;
		}
		else
			break;
	}
	cout << "No recipes for that type." << endl;
	return NULL;
};
