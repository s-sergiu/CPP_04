/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:30:05 by ssergiu           #+#    #+#             */
/*   Updated: 2023/07/22 00:30:06 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &copy);
		Cat& operator = (const Cat &src);
		~Cat();
		void makeSound() const;
};

#endif
