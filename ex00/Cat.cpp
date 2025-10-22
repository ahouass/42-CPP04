#include "Cat.hpp"

Cat::Cat( void )
{
	type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat( const Cat& copy ) : Animal(copy)
{
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat&	Cat::operator=( const Cat& copy )
{
	type = copy.type;
	std::cout << "Cat assignment operator called." << std::endl;
	return (*this);
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow! Meow!" << std::endl;
}
