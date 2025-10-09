/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:12:22 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:12:23 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )
{
	std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::AMateria( std::string const & type ) : type(type)
{
	std::cout << "AMateria constructor called." << std::endl;
}

AMateria::AMateria( const AMateria& copy ) : type(copy.type)
{
	std::cout << "AMateria copy constructor called." << std::endl;
}

AMateria&	AMateria::operator=( const AMateria& copy )
{
	if (this != &copy)
		type = copy.type;
	std::cout << "AMateria assignment operator called." << std::endl;
	return (*this);
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria destructor called." << std::endl;
}

std::string const & AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Using " << type << " on " << target.getName() << std::endl;
}
