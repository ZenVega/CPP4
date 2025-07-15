/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 09:08:50 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 13:56:13 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() :
	AMateria("ice")
{
	cout << "Ice Materia created" << endl;
};

Ice::Ice(const Ice &other) :
	AMateria("ice")

{
	if (this != &other)
	{
		_type = other._type;
	}
	cout << "Ice created from copy constructor" << endl;
};

Ice::~Ice()
{
	cout << "Ice destroyed" << endl;
};

Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
};

AMateria *Ice::clone(void) const
{
	AMateria *clone = new Ice();
	return clone;
};

void Ice::use(ICharacter &target)
{
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}
