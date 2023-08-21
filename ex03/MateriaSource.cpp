/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:06:57 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 21:06:57 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


/* Constructors */
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		_materia_memory[i] = NULL;
	_free_slot = 0;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_materia_memory[i])
			delete _materia_memory[i];
		_materia_memory[i] = copy._materia_memory[i];
	}
	_free_slot = copy._free_slot;
}

/* Destructor */
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		if (_materia_memory[i])
			delete _materia_memory[i];
}

/* Operators */
MateriaSource & MateriaSource::operator=(MateriaSource const &assign)
{
	if (this != &assign)
	{
		_free_slot = assign._free_slot;
		for (int i = 0; i < 4; ++i)
		{
			if (_materia_memory[i])
				delete _materia_memory[i];
			_materia_memory[i] = assign._materia_memory[i];
		}
	}
	return *this;
}

/* Methods */
void MateriaSource::learnMateria(AMateria* materia)
{
	if (_free_slot >= 0 && _free_slot < 4)
		_materia_memory[_free_slot++] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _free_slot; ++i)
		if (_materia_memory[i] && _materia_memory[i]->getType() == type)
			return _materia_memory[i]->clone();
	return 0;
}
