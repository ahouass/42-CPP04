#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain*	brain;
	public:
		Cat( void );
		Cat( const Cat& copy );
		Cat&	operator=( const Cat& copy );
		~Cat( void );
		void	makeSound( void ) const;
		void	setBrainIdea(int index, const std::string& idea);
		void	showBrainIdea(int index) const;
};
