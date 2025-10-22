#include "Cure.hpp"

Cure::Cure( void )
{
	type = "cure";
	std::cout << "Cure default constructor called." << std::endl;
}

Cure::Cure( const Cure& copy ) : AMateria(copy)
{
	std::cout << "Cure copy constructor called." << std::endl;
}

Cure&	Cure::operator=( const Cure& copy )
{
	if (this != &copy)
		type = copy.type;
	std::cout << "Cure assignment operator called." << std::endl;
	return (*this);
}

Cure::~Cure( void )
{
	std::cout << "Cure destructor called." << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
