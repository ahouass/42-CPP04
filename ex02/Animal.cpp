/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:09:29 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:09:40 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type("Unknown")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal( const Animal& copy ) : type(copy.type)
{
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal&	Animal::operator=( const Animal& copy )
{
	if (this != &copy)
		type = copy.type;
	std::cout << "Animal assignment operator called." << std::endl;
	return (*this);
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called." << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (type);
}
