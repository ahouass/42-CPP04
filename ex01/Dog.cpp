#include "Dog.hpp"

Dog::Dog( void )
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog( const Dog& copy ) : Animal(copy)
{
	brain = new Brain(*copy.brain);
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog&	Dog::operator=( const Dog& copy )
{
	type = copy.type;
	delete brain;
	brain = new Brain(*copy.brain);
	std::cout << "Dog assignment operator called." << std::endl;
	return (*this);
}

Dog::~Dog( void )
{
	delete brain;
	std::cout << "Dog destructor called." << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof! Woof!" << std::endl;
}

void	Dog::setBrainIdea(int index, const std::string& idea)
{
	brain->setIdea(index, idea);
}

void	Dog::showBrainIdea(int index) const
{
	std::cout << "Dog idea[" << index << "]: " << brain->getIdea(index) << std::endl;
}
