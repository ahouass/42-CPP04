#include "Cat.hpp"

Cat::Cat( void )
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat( const Cat& copy ) : Animal(copy)
{
	brain = new Brain(*copy.brain);
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat&	Cat::operator=( const Cat& copy )
{
	type = copy.type;
	delete brain;
	brain = new Brain(*copy.brain);
	std::cout << "Cat assignment operator called." << std::endl;
	return (*this);
}

Cat::~Cat( void )
{
	delete brain;
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow! Meow!" << std::endl;
}

void	Cat::setBrainIdea(int index, const std::string& idea)
{
	brain->setIdea(index, idea);
}

void	Cat::showBrainIdea(int index) const
{
	std::cout << "Cat idea[" << index << "]: " << brain->getIdea(index) << std::endl;
}
