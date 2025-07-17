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
#define MAX_IDEAS 100
class Brain
{
private:
	string _ideas[MAX_IDEAS];

public:
	Brain();
	Brain(const Brain &other);
	~Brain();

	Brain &operator=(const Brain &other);
	void   addIdea(string idea);
	string returnIdea(int idx);
};

#endif
