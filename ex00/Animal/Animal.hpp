/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:14:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/05 10:33:49 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "../includes/CONSTANTS.hpp"

class ClapTrap
{
protected:
	string		 _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;

public:
	ClapTrap();
	ClapTrap(string name);
	ClapTrap(const ClapTrap &other);
	~ClapTrap();

	ClapTrap	&operator=(const ClapTrap &other);
	void		 setStats(unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);
	virtual void attack(const string &target);
	void		 takeDamage(unsigned int amount);
	void		 beRepaired(unsigned int amount);
	unsigned int getAttackDamage(void);
};

#endif
