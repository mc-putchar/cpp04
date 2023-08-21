/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:05:15 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 21:05:15 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		/* Constructors */
		MateriaSource();
		MateriaSource(MateriaSource const &copy);

		/* Destructor */
		~MateriaSource();

		/* Operators */
		MateriaSource & operator=(MateriaSource const &assign);

		/* Methods */
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria*	_materia_memory[4];
		int			_free_slot;
};

#endif
