/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:46:05 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 19:46:05 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		/* Constructors */
		Cure();
		Cure(std::string const & type);
		Cure(Cure const & copy);

		/* Destructor */
		~Cure();

		/* Operators */
		Cure & operator=(Cure const & assign);
		
		/* Getters/Setters */
		std::string const & getType() const; 

		/* Methods */
		AMateria* clone() const;
		void use(ICharacter& target);

	private:

};

#endif
