#include "Ice.hpp"

Ice::Ice( void )
{
	type = "ice";
	std::cout << "Ice default constructor called." << std::endl;
}

Ice::Ice( const Ice& copy ) : AMateria(copy)
{
	std::cout << "Ice copy constructor called." << std::endl;
}

Ice&	Ice::operator=( const Ice& copy )
{
	if (this != &copy)
		type = copy.type;
	std::cout << "Ice assignment operator called." << std::endl;
	return (*this);
}

Ice::~Ice( void )
{
	std::cout << "Ice destructor called." << std::endl;
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
