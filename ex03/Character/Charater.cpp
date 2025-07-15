/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Charater.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 09:08:50 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/15 12:46:52 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Character.hpp"

Character::Character() :
	_name("undefined")
{
	cout << "Character of name: " << _name << " created" << endl;
};

Character::Character(string name) :
	_name(name)
{
	cout << "Character of name: " << _name << " created" << endl;
};

Character::Character(const Character &other)
{
	if (this != &other)
	{
		_name = other._name;
	}
	cout << "Character of name: " << _name << " created from copy constructor" << endl;
};

Character::~Character()
{
	for (int i = 0; i <= INVENTORY; i++)
		if (inventory[i])
			delete (inventory[i]);
	cout << "Characters " << _name << " died" << endl;
};

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		_name = other._name;
	}
	return *this;
};

string const &Character::getName(void) const
{
	return _name;
};

void Character::equip(AMateria *m)
{
	for (int i = 0; i <= INVENTORY; i++)
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			cout << "Materia " << m->getType() << "equipped" << endl;
			// logig to assign materia
			return;
		}
	cout << "No space in inventory. Unequip or use first!" << endl;
};

void Character::unequip(int idx)
{
	if (inventory[idx] != NULL)
	{
		cout << "Materia " << inventory[idx]->getType() << "dropped" << endl;
		// logic to drop inventory
	}
	else
	{
		cout << "nothing equipped to drop" << endl;
	}
};

void Character::use(int idx, ICharacter &target){};
