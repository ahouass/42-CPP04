/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:07:06 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:51:10 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	std::cout << "=== Correct Polymorphism ===" << std::endl;
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\n=====================================================" << std::endl;

	std::cout << "\n=== Wrong Polymorphism ===" << std::endl;
	const WrongAnimal*	wrong = new WrongAnimal();
	const WrongAnimal*	wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << std::endl;
	wrong->makeSound();
	wrongCat->makeSound();

	delete wrong;
	delete wrongCat;

	return (0);
}
