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
	Animal("Dog"), _brain(new Brain())
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
	Animal(other._type), _brain(new Brain())
{
	if (this != &other)
	{
		_type = other._type;
	}
	cout << "Dog of type: " << _type << " created from copy constructor" << endl;
};

Dog::~Dog()
{
	delete _brain;
	cout << "Dog of type: " << _type << " destroyed" << endl;
};

Dog &Dog::operator=(const Dog &other)
{
	cout << "Assignment operator" << endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return *this;
};

void Dog::makeSound(void) const
{
	cout << "barf barf..." << endl;
}

void Dog::think(string idea)
{
	_brain->addIdea(idea);
};

void Dog::thinkLoud(int idx) const
{
	cout << _brain->returnIdea(idx) << endl;
};
