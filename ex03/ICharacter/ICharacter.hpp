/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:14:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 14:03:44 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "../AMateria/AMateria.hpp"
#include "../includes/CONSTANTS.hpp"

class ICharacter
{
public:
	// '=0' makes it a pure abstract class, meaning we don't need any function definition;
	virtual ~ICharacter() {}
	virtual string const &getName() const				   = 0;
	virtual void		  equip(AMateria *m)			   = 0;
	virtual void		  unequip(int idx)				   = 0;
	virtual void		  use(int idx, ICharacter &target) = 0;
};

#endif
