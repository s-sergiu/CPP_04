
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

Dog::Dog(const Dog &copy)
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
