/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:48:14 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 15:48:14 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors
Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Default Constructor called of Cat" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal()
{
	_type = copy.getType();
	_brain = new Brain(*copy._brain);
	std::cout << "Copy Constructor called of Cat" << std::endl;
}


// Destructor
Cat::~Cat()
{
	delete _brain;
	std::cout << "Destructor called of Cat" << std::endl;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
{
	_type = assign.getType();
	return *this;
}

// Getters / Setters
std::string Cat::getType() const
{
	return this->_type;
}

// Methods
void	Cat::makeSound() const
{
	std::cout << "Meooow..." << std::endl;
}
