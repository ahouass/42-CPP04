/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:08:51 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:08:52 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain*	brain;
	public:
		Dog( void );
		Dog( const Dog& copy );
		Dog&	operator=( const Dog& copy );
		~Dog( void );
		void	makeSound( void ) const;
		void	setBrainIdea(int index, const std::string& idea);
		void	showBrainIdea(int index) const;
};
