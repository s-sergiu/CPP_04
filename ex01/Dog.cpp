/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:08:59 by ssergiu           #+#    #+#             */
/*   Updated: 2023/07/22 01:09:00 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain(); 
	std::cout<<"Dog constructor initialized."<<std::endl;
}

Dog::~Dog()
{
	delete(brain);
	std::cout<<"Dog destructor initialized."<<std::endl;
}

Dog::Dog(const Dog &copy) : Animal()
{
	this->brain = new Brain(*copy.brain);
	this->type = copy.type;
}

Dog& Dog::operator = (const Dog &src)
{
	for (int i = 0; i < 100; i++)
	{
		if (src.brain->getIdea(i).empty())
			break;
		this->brain->setIdea(i, src.brain->getIdea(i));
	}
	this->type = src.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout<<"*Woof*"<<std::endl;
}

void Dog::generateIdeas(std::string ideas[100])
{
	for (int i = 0; i < 100; i++)
		brain->setIdea(i, ideas[i]);
}

void Dog::printIdeas()
{
	for (int i = 0; i < 100; i++)
	{
		if (brain->getIdea(i).empty())
			break;
		std::cout<<brain->getIdea(i)<<std::endl;
	}
}
