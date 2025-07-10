/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 09:08:50 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 09:36:15 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_name("default trap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	cout << "ClapTrap: " << _name << " created" << endl;
};

ClapTrap::ClapTrap(string name) :
	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	cout << "ClapTrap: " << _name << " created" << endl;
};

void ClapTrap::setStats(unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage)
{
	_hitPoints	  = hitPoints;
	_energyPoints = energyPoints;
	_attackDamage = attackDamage;
	cout << "Overwriting " << _name << "'s stats" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	if (this != &other)
	{
		_name		  = other._name;
		_hitPoints	  = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	cout << "ClapTrap: " << _name << " created from copy constructor" << endl;
};

ClapTrap::~ClapTrap()
{
	cout << "ClapTrap: " << _name << " destroyed" << endl;
};

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name			= other._name;
		this->_hitPoints	= other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
};

void ClapTrap::attack(const string &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		cout << "ClapTrap " << _name << " attacks " << target;
		cout << ", causing " << _attackDamage << " points of damage!" << endl;
	}
	else
		cout << "ClapTrap " << _name << " out of energy or hitPoints" << endl;
};

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= _hitPoints)
	{
		_hitPoints -= amount;
		cout << _name << " looses " << amount << " hitPoints." << endl;
	}
	else
	{
		cout << _name << " looses " << _hitPoints << " hitPoints." << endl;
		_hitPoints = 0;
	}
	cout << _name << " has " << _hitPoints << " hitPoints left." << endl;
};

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
	{
		_hitPoints += amount;
		cout << _name << " getting repaired and regains " << amount << " hitPoints." << endl;
	}
	else
		cout << "ClapTrap " << _name << " out of energy" << endl;
};

unsigned int ClapTrap::getAttackDamage(void)
{
	return _attackDamage;
}
