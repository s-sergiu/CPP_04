/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:29:51 by ssergiu           #+#    #+#             */
/*   Updated: 2023/07/22 00:29:52 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout<<"Dog constructor initialized."<<std::endl;
}

Dog::~Dog()
{
	std::cout<<"Dog destructor initialized."<<std::endl;
}

Dog::Dog(const Dog &copy) : Animal()
{
	type = copy.type;	
}

Dog& Dog::operator = (const Dog &src)
{
	this->type = src.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout<<"*Woof*"<<std::endl;
}
