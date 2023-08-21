/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:30:30 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 19:30:30 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		/* Constructors */
		Character();
		Character(std::string const & name);
		Character(Character const &copy);

		/* Destructor */
		~Character();

		/* Operators */
		Character & operator=(Character const &assign);

		/* Getters/Setters */
		std::string const & getName() const;

		/* Methods */
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string	_name;
		AMateria*	_inventory[4];
		int			_free_slot;
};

#endif
