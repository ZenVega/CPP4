/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:14:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/15 12:42:01 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "../AMateria/AMateria.hpp"
#include "../includes/CONSTANTS.hpp"

class Ice : public AMateria
{
protected:
public:
	Ice(void);
	~Ice(void);
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);

	AMateria *clone() const;
	void	  use(ICharacter &target);
};

#endif
