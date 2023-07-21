/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:12:32 by ssergiu           #+#    #+#             */
/*   Updated: 2023/07/22 01:12:33 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout<<"Animal constructor initialized."<<std::endl;
}

Animal::~Animal()
{
	std::cout<<"Animal destructor initialized."<<std::endl;
}

Animal::Animal(const Animal &copy)
{
	type = copy.type;	
}

Animal& Animal::operator = (const Animal &src)
{
	this->type = src.type;
	return *this;
}

std::string Animal::getType(void) const
{
	return (type);
}
