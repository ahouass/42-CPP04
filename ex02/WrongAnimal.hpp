/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:12:11 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:12:12 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal& copy );
		WrongAnimal&	operator=( const WrongAnimal& copy );
		~WrongAnimal( void );
		void		makeSound( void ) const;
		std::string	getType( void ) const;
};
