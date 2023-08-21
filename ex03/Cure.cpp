/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:46:50 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 19:46:50 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* Constructors */
Cure::Cure() : AMateria(std::string("cure"))	{}

Cure::Cure(std::string const & type) : AMateria(type)	{}

Cure::Cure(Cure const & copy) : AMateria()
{
	*this = copy;
}

/* Destructor */
Cure::~Cure()	{}

/* Getters/Setters */
std::string const & Cure::getType() const
{
	return this->_type;
}

/* Methods */
AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target << "'s wounds *" << std::endl;
}
