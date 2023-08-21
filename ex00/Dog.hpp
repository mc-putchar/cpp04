/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:42:20 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 15:42:20 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		// Constructors
		Dog();
		Dog(const Dog &copy);
		Dog(std::string type);

		// Destructor
		~Dog();

		// Operators
		Dog & operator=(const Dog &assign);

		// Getters / Setters
		std::string getType() const;

		// Methods
		void makeSound() const;

	protected:
		std::string _type;

	private:
};

#endif