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
Dog::Dog() : AAnimal()
{
	std::cout << "Default Constructor called of Dog" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &copy) : AAnimal()
{
	std::cout << "Copy Constructor called of Dog" << std::endl;
	_type = copy.getType();
	_brain = new Brain(*copy._brain);
}


// Destructor
Dog::~Dog()
{
	std::cout << "Destructor called of Dog" << std::endl;
	delete _brain;
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
