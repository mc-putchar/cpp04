/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:52:01 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 16:52:01 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		// Constructors
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal(std::string type);

		// Destructor
		virtual ~WrongAnimal();

		// Operators
		WrongAnimal & operator=(const WrongAnimal &assign);

		// Getters / Setters
		virtual std::string getType() const;

		// Methods
		virtual void makeSound() const;

	protected:
		std::string _type;

	private:
};

#endif