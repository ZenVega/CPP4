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

public:
	Animal();
	Animal(string type);
	Animal(const Animal &other);
	virtual ~Animal();

	void		 setType(string type);
	string		 getType(void) const;
	virtual void makeSound(void) const;
	Animal	   &operator=(const Animal &other);
	virtual void think(string idea);
	virtual void thinkLoud(int idx) const;
};

#endif
