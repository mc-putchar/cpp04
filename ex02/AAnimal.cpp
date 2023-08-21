/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:04:00 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 19:04:00 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Constructors
AAnimal::AAnimal()
{
	_type = "";
	std::cout << "Default Constructor called of AAnimal" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	_type = copy.getType();
	std::cout << "Copy Constructor called of AAnimal" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	_type = type;
	std::cout << "Fields Constructor called of AAnimal" << std::endl;
}


// Destructor
AAnimal::~AAnimal()
{
	std::cout << "Destructor called of AAnimal" << std::endl;
}


// Operators
AAnimal & AAnimal::operator=(const AAnimal &assign)
{
	_type = assign.getType();
	return *this;
}

// Getters / Setters
std::string AAnimal::getType() const
{
	return this->_type;
}
