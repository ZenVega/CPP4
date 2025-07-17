/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:14:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 12:03:28 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "../WrongAnimal/WrongAnimal.hpp"
#include "../includes/CONSTANTS.hpp"

class WrongCat : public virtual WrongAnimal
{
protected:
public:
	WrongCat();
	WrongCat(string name);
	WrongCat(const WrongCat &other);
	~WrongCat();

	WrongCat &operator=(const WrongCat &other);
	void	  setType(string type);
	void	  makeSound(void) const;
};

#endif
