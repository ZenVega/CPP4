/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:14:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 12:17:08 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include "../includes/CONSTANTS.hpp"

class WrongAnimal
{
protected:
	string _type;

public:
	WrongAnimal();
	WrongAnimal(string name);
	WrongAnimal(const WrongAnimal &other);
	virtual ~WrongAnimal();

	void		 setType(string type);
	string		 getType(void) const;
	void		 makeSound(void) const;
	WrongAnimal &operator=(const WrongAnimal &other);
};

#endif
