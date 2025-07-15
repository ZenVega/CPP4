/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:45:09 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/15 13:12:33 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "../includes/CONSTANTS.hpp"

// forward declaration
class ICharacter;
class AMateria
{
protected:
	string _type;

public:
	AMateria();
	virtual ~AMateria(){};
	AMateria(std::string const &type);
	AMateria(const AMateria &other);
	AMateria &operator=(const AMateria &other);

	std::string const &getType() const;
	virtual AMateria	 *clone() const		   = 0;
	virtual void	   use(ICharacter &target) = 0;
};

#endif
