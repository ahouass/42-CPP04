/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:06:52 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:06:53 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat( void );
		Cat( const Cat& copy );
		Cat&	operator=( const Cat& copy );
		~Cat( void );
		void	makeSound( void ) const;
};
