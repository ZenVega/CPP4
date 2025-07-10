/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 09:08:50 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 12:18:53 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"

Dog::Dog() :
	Animal("Dog")
{
	cout << "Dog of type: " << _type << " created" << endl;
};

Dog::Dog(string type) :
	Animal(type)
{
	cout << "Dog of type: " << _type << " created" << endl;
};

void Dog::setType(string type)
{
	cout << "Dog of type: " << _type << " set to type: ";
	_type = type;
	cout << _type << endl;
}

Dog::Dog(const Dog &other) :
	Animal(other._type)
{
	if (this != &other)
	{
		_type = other._type;
	}
	cout << "Dog of type: " << _type << " created from copy constructor" << endl;
};

Dog::~Dog()
{
	cout << "Dog of type: " << _type << " destroyed" << endl;
};

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
};
