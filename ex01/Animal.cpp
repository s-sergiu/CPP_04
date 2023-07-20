
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

void Animal::makeSound(void) const
{
	std::cout<<"* NO SOUND *"<<std::endl;
}

std::string Animal::getType(void) const
{
	return (type);
}