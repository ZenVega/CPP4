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

#ifndef ICE_HPP
#define ICE_HPP

#include "../AMateria/AMateria.hpp"
#include "../includes/CONSTANTS.hpp"

class Ice : AMateria
{
protected:
public:
	Ice(void);
	~Ice(void);
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);

	virtual AMateria *clone() const;
	virtual void	  use(ICharacter &target);
};

#endif
