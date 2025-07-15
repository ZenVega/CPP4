/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:14:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/15 12:46:45 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "../ICharacter/ICharacter.hpp"
#include "../includes/CONSTANTS.hpp"
#define INVENTORY 4

class AMateria;

class Character : public ICharacter
{
private:
	string	  _name;
	AMateria *inventory[INVENTORY];

public:
	Character();
	Character(string name);
	Character(const Character &other);
	~Character();
	Character &operator=(const Character &other);

	string const &getName() const;
	void		  equip(AMateria *m);
	void		  unequip(int idx);
	void		  use(int idx, ICharacter &target);
};

#endif
