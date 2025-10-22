#pragma once

#include <string>
#include <iostream>

class	Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain( void );
		Brain( const Brain& copy );
		Brain&	operator=( const Brain& copy );
		~Brain( void );
		void		setIdea(int index, const std::string& idea);
		std::string	getIdea(int index) const;
};