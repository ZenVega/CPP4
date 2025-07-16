/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 09:08:50 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/15 14:52:22 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Character.hpp"

Character::Character() :
	_name("undefined")
{
	for (int i = 0; i < INVENTORY; i++)
		_inventory[i] = NULL;
	cout << "Character of name: " << _name << " created" << endl;
};

Character::Character(string name) :
	_name(name)
{
	for (int i = 0; i < INVENTORY; i++)
		_inventory[i] = NULL;
	cout << "Character of name: " << _name << " created" << endl;
};

Character::Character(const Character &other)
{
	_name = other._name;
	for (int i = 0; i < INVENTORY; i++)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	cout << "Character of name: " << _name << " created from copy constructor" << endl;
}

Character::~Character()
{
	for (int i = 0; i < INVENTORY; i++)
		if (_inventory[i] != NULL)
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	cout << "Characters " << _name << " died" << endl;
};

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < INVENTORY; i++)
		{
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return *this;
};

string const &Character::getName(void) const
{
	return _name;
};

void Character::equip(AMateria *m)
{
	for (int i = 0; i < INVENTORY; i++)
		if (_inventory[i] == m)
		{
			cout << "Materia already equipped!" << endl;
			return;
		}
	for (int i = 0; i < INVENTORY; i++)
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			_inventory[i]->equip();
			cout << "Materia " << m->getType() << " equipped" << endl;
			// logic to assign materia
			return;
		}
	cout << "No space in _inventory. Unequip or use first!" << endl;
};

void Character::unequip(int idx)
{
	if (_inventory[idx] != NULL)
	{
		_inventory[idx]->drop();
		cout << "Materia " << _inventory[idx]->getType() << "dropped" << endl;
		_inventory[idx] = NULL;
	}
	else
	{
		cout << "nothing equipped to drop" << endl;
	}
};

void Character::use(int idx, ICharacter &target)
{
	if (_inventory[idx] != NULL)
	{
		_inventory[idx]->use(target);
		delete _inventory[idx];
		_inventory[idx] = NULL;
	}
	else
		cout << "No Item in that slot" << endl;
};
