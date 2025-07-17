/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:06:56 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 12:07:26 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "../Animal/Animal.hpp"
#include "../includes/CONSTANTS.hpp"

class Dog : public virtual Animal
{
protected:
public:
	Dog();
	Dog(const Dog &other);
	~Dog();

	Dog &operator=(const Dog &other);
	void setType(string type);
	void makeSound(void) const;
};

#endif
