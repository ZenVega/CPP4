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
#include "Animal.hpp"

Animal::Animal() :
	_type("undefined animal")
{
	cout << "Animal of type: " << _type << " created" << endl;
};

Animal::Animal(string type) :
	_type(type)
{
	cout << "Animal of type: " << _type << " created" << endl;
};

void Animal::setType(string type)
{
	cout << "Animal of type: " << _type << " set to type: ";
	_type = type;
	cout << _type << endl;
}

string Animal::getType(void) const
{
	return _type;
}

Animal::Animal(const Animal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	cout << "Animal of type: " << _type << " created from copy constructor" << endl;
};

Animal::~Animal()
{
	cout << "Animal of type: " << _type << " destroyed" << endl;
};

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
};

void Animal::makeSound(void) const
{
	if (_type == "Cat")
		cout << "meow meow" << endl;
	else if (_type == "Dog")
		cout << "bark bark" << endl;
	else
		cout << "unidentified Noises" << endl;
}
