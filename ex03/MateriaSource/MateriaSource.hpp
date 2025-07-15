/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:14:15 by uschmidt          #+#    #+#             */
/*   Updated: 2025/07/15 12:41:48 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP
#define RECIPE_SIZE 4

#include "../IMateriaSource/IMateriaSource.hpp"
#include "../includes/CONSTANTS.hpp"

// has to be public inheritance to cast it to its base class
class MateriaSource : public IMateriaSource
{
private:
	AMateria *_recipes[RECIPE_SIZE];

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &other);

	void	  learnMateria(AMateria *materia);
	AMateria *createMateria(std::string const &type);
};
#endif
