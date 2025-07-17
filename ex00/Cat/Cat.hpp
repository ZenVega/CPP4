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

#ifndef CAT_HPP
#define CAT_HPP

#include "../Animal/Animal.hpp"
#include "../includes/CONSTANTS.hpp"

class Cat : public virtual Animal
{
protected:
public:
	Cat();
	Cat(string name);
	Cat(const Cat &other);
	~Cat();

	Cat &operator=(const Cat &other);
	void setType(string type);
	void makeSound(void) const;
};

#endif
