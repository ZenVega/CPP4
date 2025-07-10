/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:14:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 10:02:42 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../ClapTrap/ClapTrap.hpp"
#include "../includes/CONSTANTS.hpp"

class FragTrap : public virtual ClapTrap
{
protected:
public:
	FragTrap();
	FragTrap(string name);
	FragTrap(const FragTrap &other);
	~FragTrap();

	FragTrap &operator=(const FragTrap &other);
	void	  highFivesGuys(void);
};

#endif
