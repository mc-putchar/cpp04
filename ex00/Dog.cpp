/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:44:42 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 15:44:42 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << "Default Constructor called of Dog" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal()
{
	_type = copy.getType();
	std::cout << "Copy Constructor called of Dog" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	_type = type;
	std::cout << "Fields Constructor called of Dog" << std::endl;
}


// Destructor
Dog::~Dog()
{
	std::cout << "Destructor called of Dog" << std::endl;
}


// Operators
Dog & Dog::operator=(const Dog &assign)
{
	_type = assign.getType();
	return *this;
}

// Getters / Setters
std::string Dog::getType() const
{
	return this->_type;
}

// Methods
void	Dog::makeSound() const
{
	std::cout << "Woof woof!" << std::endl;
}
