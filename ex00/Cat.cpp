/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:06:47 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:50:44 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat( const Cat& copy ) : Animal(copy)
{
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat&	Cat::operator=( const Cat& copy )
{
	if (this != &copy)
		type = copy.type;
	std::cout << "Cat assignment operator called." << std::endl;
	return (*this);
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow! Meow!" << std::endl;
}
