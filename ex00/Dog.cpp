#include "Dog.hpp"

Dog::Dog( void )
{
	type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog( const Dog& copy ) : Animal(copy)
{
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog&	Dog::operator=( const Dog& copy )
{
	type = copy.type;
	std::cout << "Dog assignment operator called." << std::endl;
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called." << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof! Woof!" << std::endl;
}
