/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:13:09 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:13:10 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		Ice( void );
		Ice( const Ice& copy );
		Ice&	operator=( const Ice& copy );
		~Ice( void );
		AMateria* clone() const;
		void use(ICharacter& target);
};
