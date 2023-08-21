/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:30:02 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 15:30:02 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal()
{
	_type = "";
	std::cout << "Default Constructor called of Animal" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	_type = copy.getType();
	std::cout << "Copy Constructor called of Animal" << std::endl;
}

Animal::Animal(std::string type)
{
	_type = type;
	std::cout << "Fields Constructor called of Animal" << std::endl;
}


// Destructor
Animal::~Animal()
{
	std::cout << "Destructor called of Animal" << std::endl;
}


// Operators
Animal & Animal::operator=(const Animal &assign)
{
	_type = assign.getType();
	return *this;
}

// Getters / Setters
std::string Animal::getType() const
{
	return this->_type;
}

// Methods
void	Animal::makeSound() const
{
	std::cout << "*animal noise*" << std::endl;
}
