
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

void Animal::makeSound(void)
{
	if (type == "Cat")
		std::cout<<"meow"<<std::endl;
	else if (type == "Dog")
		std::cout<<"woof"<<std::endl;
	else 
		std::cout<<"no sound"<<std::endl;
}

std::string Animal::getType(void)
{
	return (type)
}
