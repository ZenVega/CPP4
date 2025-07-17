/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:28:11 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 14:02:17 by uschmidt         ###   ########.fr       */
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

	for (int i = 0; i < NUM_ANIMALS; i++)
	{
		animals[i]->makeSound();
		animals[i]->thinkLoud(0);
		delete animals[i];
	}
	return 0;
}
