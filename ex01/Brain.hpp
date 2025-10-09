/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 22:08:18 by mohaben-          #+#    #+#             */
/*   Updated: 2025/08/21 22:08:20 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class	Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain( void );
		Brain( const Brain& copy );
		Brain&	operator=( const Brain& copy );
		~Brain( void );
		void		setIdea(int index, const std::string& idea);
		std::string	getIdea(int index) const;
};