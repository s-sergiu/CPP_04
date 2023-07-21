
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
