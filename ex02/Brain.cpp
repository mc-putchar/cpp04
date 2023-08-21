/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:14:18 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 17:14:18 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	std::cout << "Default Constructor called of Brain" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (int i=0; i < 100; ++i)
		_ideas[i] = copy.getIdea(i).c_str();
	std::cout << "Copy Constructor called of Brain" << std::endl;
}


// Destructor
Brain::~Brain()
{
	std::cout << "Destructor called of Brain" << std::endl;
}


// Operators
Brain & Brain::operator=(const Brain &assign)
{
	for (int i=0; i < 100; ++i)
		_ideas[i] = assign.getIdea(i).c_str();
	return *this;
}


// Getters / Setters
std::string Brain::getIdea(int idx) const
{
	return ((idx >= 0 && idx < 100) ? _ideas[idx] : NULL);
}
