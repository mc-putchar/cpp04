/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:01:12 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 20:01:12 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Constructors */
Character::Character()	{}

Character::Character(std::string const & name) : _name(name)
{
	_free_slot = 0;
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
}

Character::Character(Character const &copy)
{
	_name = copy.getName();
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i])
			delete _inventory[i];
		_inventory[i] = copy._inventory[i];
	}
}

/* Destructor */
Character::~Character()
{
	for (int i = 0; i < 4; ++i)
		if (_inventory[i])
			delete _inventory[i];
}

/* Operators */
Character & Character::operator=(Character const &assign)
{
	if (this != &assign)
	{
		_name = assign.getName();
		for (int i = 0; i < 4; ++i)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = assign._inventory[i];
		}
	}
	return *this;
}

/* Getters/Setters */
std::string const & Character::getName() const
{
	return this->_name;
}

/* Methods */
void Character::equip(AMateria* m)
{
	if (_free_slot >= 0 && _free_slot < 4)
	{
		_inventory[_free_slot++] = m;
		while (_free_slot < 4 && _inventory[_free_slot])
			++_free_slot;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
	{
		_inventory[idx] = NULL;
		if (idx < _free_slot)
			_free_slot = idx;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}

std::ostream & operator<<(std::ostream& stream, const ICharacter& target)
{
	stream << target.getName();
	return stream;
}
