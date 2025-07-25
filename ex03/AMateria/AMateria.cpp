/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 09:08:50 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/15 10:52:34 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MateriaSource/MateriaSource.hpp"
#include "AMateria.hpp"

AMateria::AMateria() :
	_type("undefined")
{
	cout << "AMateria of type: " << _type << " created" << endl;
};

AMateria::AMateria(string const &type) :
	_type(type)
{
	cout << "AMateria of type: " << _type << " created" << endl;
};

AMateria::AMateria(const AMateria &other) :
	_type(other._type)
{
	std::cout << "AMateria copied" << std::endl;
}

AMateria::~AMateria()
{
	cout << "AMateria of type: " << _type << " destroyed" << endl;
};

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return *this;
};

string const &AMateria::getType(void) const
{
	return _type;
};

void AMateria::addSource(MateriaSource *source)
{
	_source = source;
};

void AMateria::equip(void)
{
	_source->removeFromCreated(this);
};

void AMateria::drop(void)
{
	_source->addCreatedMateria(this);
};
