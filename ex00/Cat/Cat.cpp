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

#include "Cat.hpp"

Cat::Cat() :
	Animal("Cat")
{
	cout << "Cat of type: " << _type << " created" << endl;
};

Cat::Cat(string type) :
	Animal(type)
{
	cout << "Cat of type: " << _type << " created" << endl;
};

void Cat::setType(string type)
{
	cout << "Cat of type: " << _type << " set to type: ";
	_type = type;
	cout << _type << endl;
}

Cat::Cat(const Cat &other) :
	Animal(other._type)

{
	if (this != &other)
	{
		_type = other._type;
	}
	cout << "Cat of type: " << _type << " created from copy constructor" << endl;
};

Cat::~Cat()
{
	cout << "Cat of type: " << _type << " destroyed" << endl;
};

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
};

void Cat::makeSound(void) const
{
	cout << "mew mew..." << endl;
}
