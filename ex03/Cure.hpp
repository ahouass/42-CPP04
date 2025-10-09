/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:12:57 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:13:00 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure( void );
		Cure( const Cure& copy );
		Cure&	operator=( const Cure& copy );
		~Cure( void );
		AMateria* clone() const;
		void use(ICharacter& target);
};
