
#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain(); std::cout<<"Dog constructor initialized."<<std::endl;
}

Dog::~Dog()
{
	delete(brain);
	std::cout<<"Dog destructor initialized."<<std::endl;
}

Dog::Dog(const Dog &copy) : Animal()
{
	*this = copy;
}

Dog& Dog::operator = (const Dog &src)
{
	brain = new Brain();

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
	{
		if (ideas[i].empty())
			break;
		brain->setIdea(i, ideas[i]);
	}
}

void Dog::printIdeas(void)
{
	for (int i = 0; i < 100; i++)	
	{
		if (brain->getIdea(i).empty())
			break;
		std::cout<<brain->getIdea(i)<<std::endl;
	}
}
