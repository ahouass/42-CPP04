#pragma once

#include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure( void );
		Cure( const Cure& copy );
		Cure&	operator=( const Cure& copy );
		~Cure( void );
		AMateria* clone() const;
		void use(ICharacter& target);
};
