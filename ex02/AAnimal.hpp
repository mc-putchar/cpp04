/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:00:09 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 19:00:09 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
	public:
		// Constructors
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal(std::string type);

		// Destructor
		virtual ~AAnimal();

		// Operators
		AAnimal & operator=(const AAnimal &assign);

		// Getters / Setters
		virtual std::string getType() const;

		// Methods
		virtual void makeSound() const = 0;

	protected:
		std::string _type;

	private:
};

#endif