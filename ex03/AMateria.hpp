#pragma once

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria( void );
		AMateria( std::string const & type );
		AMateria( const AMateria& copy );
		AMateria&	operator=( const AMateria& copy );
		virtual ~AMateria( void );
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
