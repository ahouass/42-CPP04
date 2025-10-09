/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:07:02 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:07:05 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog( void );
		Dog( const Dog& copy );
		Dog&	operator=( const Dog& copy );
		~Dog( void );
		void	makeSound( void ) const;
};
