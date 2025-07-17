/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 09:08:50 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 12:15:06 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() :
	_type("undefined wrongAnimal")
{
	cout << "WrongAnimal of type: " << _type << " created" << endl;
};

WrongAnimal::WrongAnimal(string type) :
	_type(type)
{
	cout << "WrongAnimal of type: " << _type << " created" << endl;
};

void WrongAnimal::setType(string type)
{
	cout << "WrongAnimal of type: " << _type << " set to type: ";
	_type = type;
	cout << _type << endl;
}

string WrongAnimal::getType(void) const
{
	return _type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	cout << "WrongAnimal of type: " << _type << " created from copy constructor" << endl;
};

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal of type: " << _type << " destroyed" << endl;
};

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
};

void WrongAnimal::makeSound(void) const
{
	cout << "absolutely wrong noises noises" << endl;
}
