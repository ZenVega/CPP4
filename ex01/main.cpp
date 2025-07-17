/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:28:11 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 13:53:37 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/main.hpp"
#define NUM_ANIMALS 5

int main()
{
	Animal *animals[NUM_ANIMALS];
	for (int i = 0; i < NUM_ANIMALS; i++)
	{
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	cout << "thinking_____________" << endl;
	for (int i = 0; i < NUM_ANIMALS; i++)
		animals[i]->think("This is fine.");

	cout << "cloning_____________" << endl;
	cout << "This will result in the creation of an Animal Object. No Cat methods will be inherited" << endl;
	cout << "To create the inherited class, we need to clone the object or call the Derived constructor" << endl;
	Animal tmp = *animals[NUM_ANIMALS - 2];
	tmp.thinkLoud(0);
	tmp.makeSound();

	for (int i = 0; i < NUM_ANIMALS; i++)
	{
		animals[i]->makeSound();
		animals[i]->thinkLoud(0);
		delete animals[i];
	}
	return 0;
}
