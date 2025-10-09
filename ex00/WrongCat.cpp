/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:07:28 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:07:29 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	type = "WrongCat";
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat( const WrongCat& copy ) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& copy )
{
	if (this != &copy)
		type = copy.type;
	std::cout << "WrongCat copy assignment operator called." << std::endl;
	return (*this);
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "WrongCat makes sound: Meow!" << std::endl;
}
