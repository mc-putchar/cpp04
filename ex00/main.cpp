/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:27:36 by mcutura           #+#    #+#             */
/*   Updated: 2023/08/21 15:27:36 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const WrongAnimal* beta = new WrongAnimal();
	const Animal* j = new Dog();
	const Dog k = *(Dog *)j;
	const Animal* i = new Cat();
	const WrongAnimal* w = new WrongCat();

	std::cout << j->getType() << ": ";
	j->makeSound();
	std::cout << i->getType() << ": ";
	i->makeSound();
	std::cout << k.getType() << ": ";
	k.makeSound();
	std::cout << meta->getType() << ": ";
	meta->makeSound();
	std::cout << beta->getType() << ": ";
	beta->makeSound();
	std::cout << w->getType() << ": ";
	w->makeSound();

	delete meta;
	delete j;
	delete i;
	delete w;
	delete beta;
	return 0;
}
