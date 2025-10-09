/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:12:03 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:12:06 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("Unknown")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& copy ) : type(copy.type)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& copy )
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << "WrongAnimal assignment operator called." << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal sound." << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}
