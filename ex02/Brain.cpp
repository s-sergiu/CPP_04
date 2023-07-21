/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:12:35 by ssergiu           #+#    #+#             */
/*   Updated: 2023/07/22 01:12:36 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"Brain constructor initialized."<<std::endl;
}

Brain::~Brain()
{
	std::cout<<"Brain destructor initialized."<<std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];	
}

Brain& Brain::operator = (const Brain &src)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return *this;
}

std::string Brain::getIdea(int idx)
{
	return (ideas[idx]);
}

void Brain::setIdea(int id, std::string idea)
{
	ideas[id] = idea;
}
