/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:14:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 14:03:44 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "../Brain/Brain.hpp"
#include "../includes/CONSTANTS.hpp"

class Animal
{
protected:
	string _type;
	Brain *_ideas;
	// making constructors protected prevents  base class object creation
	Animal();
	Animal(string name);
	Animal(const Animal &other);

public:
	virtual ~Animal();
	void setType(string type);
	// const in this example is also necessary to make in callable on a const Animal
	string		 getType(void) const;
	virtual void makeSound(void) const;
	Animal		&operator=(const Animal &other);
};

#endif
