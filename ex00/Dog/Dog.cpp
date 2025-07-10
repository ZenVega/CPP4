/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 09:08:50 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 09:30:14 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
	ClapTrap("default trap")
{
	cout << "ScavTrap: " << _name << " created" << endl;
	ClapTrap::setStats(100, 50, 20);
};

ScavTrap::ScavTrap(string name) :
	ClapTrap(name)
{
	cout << "ScavTrap: " << _name << " created" << endl;
	ClapTrap::setStats(100, 50, 20);
};

ScavTrap::ScavTrap(const ScavTrap &other) :
	ClapTrap(other._name)
{
	if (this != &other)
	{
		_hitPoints	  = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	cout << "ScavTrap: " << _name << " created from copy constructor" << endl;
};

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		_name		  = other._name;
		_hitPoints	  = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap: " << _name << " destroyed" << endl;
};

void ScavTrap::attack(const string &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		cout << "ScavTrap " << _name << " attacks " << target;
		cout << ", causing " << _attackDamage << " points of damage!" << endl;
	}
	else
		cout << "ScavTrap: " << _name << " out of energy or hitPoints" << endl;
};

void ScavTrap::guardGate(void)
{
	cout << "ScavTrap: " << _name << " now in Gate Keeper Mode" << endl;
};
