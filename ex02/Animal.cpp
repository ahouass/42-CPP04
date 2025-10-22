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
