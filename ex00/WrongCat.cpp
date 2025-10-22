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
