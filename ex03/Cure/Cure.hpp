/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:14:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/15 13:08:41 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "../AMateria/AMateria.hpp"
#include "../includes/CONSTANTS.hpp"

class Cure : public AMateria
{
protected:
public:
	Cure(void);
	~Cure(void);
	Cure(const Cure &other);
	Cure &operator=(const Cure &other);

	AMateria *clone() const;
	void	  use(ICharacter &target);
};

#endif
