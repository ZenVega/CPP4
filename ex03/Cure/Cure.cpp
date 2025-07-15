/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 09:08:50 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/15 13:08:58 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() :
	AMateria("cure")
{
	cout << "Cure Materia created" << endl;
};

Cure::Cure(const Cure &other) :
	AMateria("cure")

{
	if (this != &other)
	{
		_type = other._type;
	}
	cout << "Cure created from copy constructor" << endl;
};

Cure::~Cure()
{
	cout << "Cure destroyed" << endl;
};

Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
};

AMateria *Cure::clone(void) const
{
	AMateria *clone = new Cure();
	return clone;
};

void Cure::use(ICharacter &target)
{
	cout << "* heals " << target.getName() << "’s wounds *" << endl;
}
