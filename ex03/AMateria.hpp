/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:08:35 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 19:08:35 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;

	public:
		/* Constructors */
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const &copy);

		/* Destructor */
		virtual ~AMateria();

		/* Operators */
		AMateria & operator=(AMateria const &assign);

		/* Getters/Setters */
		std::string const & getType() const; 

		/* Methods */
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	private:
};

#endif
