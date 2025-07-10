/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:14:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 09:30:28 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "../ClapTrap/ClapTrap.hpp"
#include "../includes/CONSTANTS.hpp"

// virtual here takes care that only one base class Clap Trap exists in Diamond Class
class ScavTrap : public virtual ClapTrap
{
protected:
public:
	ScavTrap();
	ScavTrap(string name);
	ScavTrap(const ScavTrap &other);
	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &other);
	void	  attack(const string &target);
	void	  guardGate();
};

#endif
