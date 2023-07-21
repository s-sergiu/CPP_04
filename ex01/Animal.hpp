/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:09:05 by ssergiu           #+#    #+#             */
/*   Updated: 2023/07/22 01:09:06 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		virtual void makeSound() const;
		std::string getType() const;
		Animal();
		Animal(const Animal &copy);
		Animal& operator = (const Animal &src);
		virtual ~Animal();
};

#endif
