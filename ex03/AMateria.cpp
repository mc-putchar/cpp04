/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:17:10 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 19:17:10 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* Constructors */
AMateria::AMateria() : _type("")	{}

AMateria::AMateria(std::string const & type) : _type(type)	{}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
}

/* Destructor */
AMateria::~AMateria()	{}

/* Operators */
AMateria & AMateria::operator=(AMateria const &assign)
{
	if (this != &assign)
		return *assign.clone();
	return *this;
}

/* Getters/Setters */
std::string const & AMateria::getType() const
{
	return this->_type;
}

/* Methods */
void AMateria::use(ICharacter& target)
{
	std::cout << "* " << this->getType() << " used on " << target 
			<< " *" << std::endl;
}
