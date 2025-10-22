#pragma once

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria*	materias[4];
	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource& copy );
		MateriaSource&	operator=( const MateriaSource& copy );
		~MateriaSource( void );
		void		learnMateria( AMateria* m );
		AMateria*	createMateria( const std::string& type );
};
