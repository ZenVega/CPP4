/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 09:08:50 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/10 13:54:53 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{

	cout << "Brain  created" << endl;
};

Brain::Brain(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	cout << "Brain created from copy constructor" << endl;
};

Brain::~Brain()
{
	cout << "Brain destroyed" << endl;
};

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return *this;
};

void Brain::addIdea(string idea)
{
	for (int i = 0; i < MAX_IDEAS; i++)
	{
		if (_ideas[i].empty())
		{
			_ideas[i] = idea;
			cout << "Idea incepted" << endl;
			return;
		};
	}
	cout << "Brain is full" << endl;
};

string Brain::returnIdea(int idx)
{
	if (!_ideas[idx].empty())
		return _ideas[idx];
	return "n0 iDea";
};
