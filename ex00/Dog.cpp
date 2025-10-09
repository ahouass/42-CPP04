/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:06:58 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:07:00 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog( const Dog& copy ) : Animal(copy)
{
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog&	Dog::operator=( const Dog& copy )
{
	if (this != &copy)
		type = copy.type;
	std::cout << "Dog assignment operator called." << std::endl;
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called." << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof! Woof!" << std::endl;
}
