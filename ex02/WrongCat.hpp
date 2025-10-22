#pragma once

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( const WrongCat& copy );
		WrongCat& operator=( const WrongCat& copy );
		~WrongCat( void );
		void makeSound( void ) const;
};
