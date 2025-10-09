/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:07:47 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:07:48 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal( void );
		Animal( const Animal& copy );
		Animal&	operator=( const Animal& copy );
		virtual	~Animal( void );
		virtual void	makeSound( void ) const;
		std::string		getType( void ) const;
};
