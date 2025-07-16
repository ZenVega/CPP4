/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:28:11 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/15 12:50:17 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/main.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria	 *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	delete me;
	delete src;
	return 0;
}
// test for memory leaks
