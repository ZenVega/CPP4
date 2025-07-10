/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:06:56 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 13:47:18 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "../includes/CONSTANTS.hpp"

class Brain
{
private:
	string _ideas[100];

public:
	Brain();
	Brain(const Brain &other);
	~Brain();

	Brain &operator=(const Brain &other);
};

#endif
