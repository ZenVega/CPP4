/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 09:08:50 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 12:18:04 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() :
	WrongAnimal("WrongCat")
{
	cout << "WrongCat of type: " << _type << " created" << endl;
};

void WrongCat::setType(string type)
{
	cout << "WrongCat of type: " << _type << " set to type: ";
	_type = type;
	cout << _type << endl;
}

WrongCat::WrongCat(const WrongCat &other) :
	WrongAnimal(other._type)

{
	if (this != &other)
	{
		_type = other._type;
	}
	cout << "WrongCat of type: " << _type << " created from copy constructor" << endl;
};

WrongCat::~WrongCat()
{
	cout << "WrongCat of type: " << _type << " destroyed" << endl;
};

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
};

void WrongCat::makeSound(void) const
{
	cout << "WrongMew WrongMew..." << endl;
}
