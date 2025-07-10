/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 09:08:50 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 09:30:32 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

FragTrap::FragTrap() :
	ClapTrap("default trap")
{
	cout << "FragTrap: " << _name << " created" << endl;
	ClapTrap::setStats(100, 100, 30);
};

FragTrap::FragTrap(string name) :
	ClapTrap(name)
{
	cout << "FragTrap: " << _name << " created" << endl;
	ClapTrap::setStats(100, 100, 30);
};

FragTrap::FragTrap(const FragTrap &other) :
	ClapTrap(other._name)
{
	if (this != &other)
	{
		_hitPoints	  = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	cout << "FragTrap: " << _name << " created from copy constructor" << endl;
};

FragTrap &FragTrap::operator=(const FragTrap &other)
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

FragTrap::~FragTrap()
{
	cout << "FragTrap: " << _name << " destroyed" << endl;
};

void FragTrap::highFivesGuys(void)
{
	cout << "FragTrap: " << _name << " hey hey, gimme five?!" << endl;
};
