/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:14:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 14:00:29 by uschmidt         ###   ########.fr       */
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
	// making constructors protected prevents  base class object creation
	Animal();
	Animal(string type);
	Animal(const Animal &other);

public:
	virtual ~Animal();

	void	setType(string type);
	string	getType(void) const;
	Animal &operator=(const Animal &other);
	// making member functions pure virtual also prevents the base class from being created
	virtual void makeSound(void) const	  = 0;
	virtual void think(string idea)		  = 0;
	virtual void thinkLoud(int idx) const = 0;
};

#endif
