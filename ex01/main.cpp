/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:08:54 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/23 12:29:40 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	delete j;
	delete i;

	std::cout << "------------------------------------------------" << std::endl;
	{
		Dog	d1;
		Dog	d2(d1);

		d1.setBrainIdea(0, "Catch the ball!");
		d2.setBrainIdea(0, "Chase the cat!");

		d1.showBrainIdea(0);
		d2.showBrainIdea(0);
	}

	std::cout << "------------------------------------------------" << std::endl;

	Animal*	arr[4];
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			arr[i] = new Cat();
		else
			arr[i] = new Dog();
	}

	std::cout << "------------------------------------------------" << std::endl;

	for (int i = 0; i < 4; i++)
		delete arr[i];

	return (0);
}
