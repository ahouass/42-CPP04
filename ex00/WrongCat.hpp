/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:07:31 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:07:35 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( const WrongCat& copy );
		WrongCat& operator=( const WrongCat& copy );
		~WrongCat( void );
		void makeSound( void ) const;
};
