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
	const Animal *animals[3];
	animals[0] = new Animal();
	animals[1] = new Dog();
	animals[2] = new Cat();
	const WrongAnimal *wrongAnimals[2];
	wrongAnimals[0] = new WrongAnimal();
	wrongAnimals[1] = new WrongCat();
	std::cout << "Right animals___________________________" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
		delete animals[i];
	}
	std::cout << "Wrong animals___________________________" << std::endl;
	for (int i = 0; i < 2; i++)
	{
		std::cout << wrongAnimals[i]->getType() << std::endl;
		wrongAnimals[i]->makeSound();
		delete wrongAnimals[i];
	}
	return 0;
}
