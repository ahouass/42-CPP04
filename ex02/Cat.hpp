/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:11:38 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:11:39 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		virtual void	makeSound( void ) const;
		void			setBrainIdea(int index, const std::string& idea);
		void			showBrainIdea(int index) const;
};
