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

int main()
{
	Animal *animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			animals[i] = new Cat("Cat");
		else
			animals[i] = new Dog("Dog");
	}
	for (int i = 0; i < 10; i++)
	{
		animals[i]->makeSound();
		delete animals[i];
	}
	return 0;
}
