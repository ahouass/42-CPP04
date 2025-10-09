/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:12:49 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:12:50 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

struct	Dropped_list
{
	AMateria*		materia;
	Dropped_list*	next;
};

class	Character : public ICharacter
{
	private:
		std::string				name;
		AMateria*				inventory[4];
		static Dropped_list*	dropped;
	public:
		Character( void );
		Character( const std::string& name );
		Character( const Character& copy );
		Character&	operator=( const Character& copy );
		~Character( void );
		std::string const & getName() const;
		void		equip(AMateria* m);
		void		unequip(int idx);
		void		use(int idx, ICharacter& target);
		static void	cleanDropped( void );
};
