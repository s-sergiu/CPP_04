/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:29:45 by ssergiu           #+#    #+#             */
/*   Updated: 2023/07/22 00:29:46 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout<<"Cat constructor initialized."<<std::endl;
}

Cat::~Cat()
{
	std::cout<<"Cat destructor initialized."<<std::endl;
}

Cat::Cat(const Cat &copy) : Animal()
{
	type = copy.type;	
}

Cat& Cat::operator = (const Cat &src)
{
	this->type = src.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout<<"*Moew*"<<std::endl;
}
