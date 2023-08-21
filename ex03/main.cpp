/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:33:41 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 20:33:41 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("MC Putchar");
	AMateria* tmp = src->createMateria("ice");
	me->equip(tmp);
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));

	ICharacter* subject = new Character("N00B");

	me->use(0, *subject);
	me->use(1, *subject);
	me->use(2, *subject);
	me->use(3, *subject);

	me->unequip(0);
	me->use(0, *subject);

	delete tmp;
	delete subject;
	delete me;
	delete src;

	return 0;
}
