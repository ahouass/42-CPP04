/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:13:26 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:13:29 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria*	materias[4];
	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource& copy );
		MateriaSource&	operator=( const MateriaSource& copy );
		~MateriaSource( void );
		void		learnMateria( AMateria* m );
		AMateria*	createMateria( const std::string& type );
};
