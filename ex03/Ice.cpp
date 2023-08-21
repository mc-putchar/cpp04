/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:56:28 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 19:56:28 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* Constructors */
Ice::Ice() : AMateria(std::string("ice"))	{}

Ice::Ice(std::string const & type) : AMateria(type)	{}

Ice::Ice(Ice const & copy) : AMateria()
{
	*this = copy;
}

/* Destructor */
Ice::~Ice()	{}

/* Getters/Setters */
std::string const & Ice::getType() const
{
	return this->_type;
}

/* Methods */
AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target << " *" << std::endl;
}
