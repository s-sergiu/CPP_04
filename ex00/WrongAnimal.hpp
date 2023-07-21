/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:30:13 by ssergiu           #+#    #+#             */
/*   Updated: 2023/07/22 00:30:14 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		std::string getType() const;
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal& operator = (const WrongAnimal &src);
		virtual ~WrongAnimal();
		void makeSound() const;
};

#endif
