
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
	brain = new Brain();
	for (int i = 0; i < 100; i++)
		brain->setIdea(i, copy.brain->getIdea(i));
	type = copy.type;	
}

Dog& Dog::operator = (const Dog &src)
{
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(i, src.brain->getIdea(i));
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
		std::cout<<brain->getIdea(i)<<std::endl;
}
