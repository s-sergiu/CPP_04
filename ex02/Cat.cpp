
#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout<<"Cat constructor initialized."<<std::endl;
}

Cat::~Cat()
{
	delete(brain);
	std::cout<<"Cat destructor initialized."<<std::endl;
}

Cat::Cat(const Cat &copy)
{
	type = copy.type;	
}

Cat& Cat::operator = (const Cat &src)
{
	this->type = src.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout<<"*Moew*"<<std::endl;
}
