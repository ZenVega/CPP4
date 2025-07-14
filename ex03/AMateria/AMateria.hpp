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

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "../includes/CONSTANTS.hpp"

// this forward declares the ICharacter class, preventing recursive inclusion
class ICharacter;
class AMateria
{
protected:
public:
	AMateria(std::string const &type);
	std::string const &getType() const; // Returns the materia type
	virtual AMateria	 *clone() const = 0;
	virtual void	   use(ICharacter &target);
};

#endif
