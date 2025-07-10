/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:28:11 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 09:41:34 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/main.hpp"

int main(void)
{
	ClapTrap	trap_a = ClapTrap("clap_a");
	ScavTrap	trap_b = ScavTrap("scav_b");
	FragTrap	trap_c = FragTrap("frag_a");
	DiamondTrap trap_d = DiamondTrap("diamond_a");
	// DiamondTrap trap_e = DiamondTrap(trap_d);
	// DiamondTrap trap_e = trap_d;

	trap_d.attack("trap_b");
	trap_b.takeDamage(trap_d.getAttackDamage());
	trap_d.attack("trap_c");
	trap_c.takeDamage(trap_d.getAttackDamage());
	trap_b.guardGate();
	trap_c.highFivesGuys();
	trap_d.whoAmI();

	return 0;
}
