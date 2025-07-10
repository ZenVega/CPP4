/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:28:11 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 12:21:29 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/main.hpp"

int main()
{
	const Animal *meta			= new Animal();
	const Animal *j				= new Dog();
	const Animal *i				= new Cat();
	Animal		 *catDog		= new Cat("Dog");
	Animal		  dynamicAnimal = *catDog;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	catDog->makeSound();
	dynamicAnimal.makeSound();
	dynamicAnimal.setType("undefined");
	dynamicAnimal.makeSound();
	delete (meta);
	delete (j);
	delete (i);
	delete (catDog);
	return 0;
}
