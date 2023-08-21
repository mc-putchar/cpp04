/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:36:35 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 19:36:35 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		/* Constructors */
		Ice();
		Ice(std::string const & type);
		Ice(Ice const & copy);

		/* Destructor */
		~Ice();

		/* Operators */
		Ice & operator=(Ice const & assign);
		
		/* Getters/Setters */
		std::string const & getType() const; 

		/* Methods */
		AMateria* clone() const;
		void use(ICharacter& target);

	private:

};

#endif
