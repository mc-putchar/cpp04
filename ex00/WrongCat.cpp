/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:55:20 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 16:55:20 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "Default Constructor called of WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
	_type = copy.getType();
	std::cout << "Copy Constructor called of WrongCat" << std::endl;
}

WrongCat::WrongCat(std::string type)
{
	_type = type;
	std::cout << "Fields Constructor called of WrongCat" << std::endl;
}


// Destructor
WrongCat::~WrongCat()
{
	std::cout << "Destructor called of WrongCat" << std::endl;
}


// Operators
WrongCat & WrongCat::operator=(const WrongCat &assign)
{
	_type = assign.getType();
	return *this;
}

// Getters / Setters
std::string WrongCat::getType() const
{
	return this->_type;
}

// Methods
void	WrongCat::makeSound() const
{
	std::cout << "Niaaaooow@&%~" << std::endl;
}
