/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:14:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/15 10:59:59 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_MATERIA_SOURCE_HPP
#define I_MATERIA_SOURCE_HPP

#include "../AMateria/AMateria.hpp"
#include "../includes/CONSTANTS.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void	  learnMateria(AMateria *)			= 0;
	virtual AMateria *createMateria(string const &type) = 0;
};
#endif
