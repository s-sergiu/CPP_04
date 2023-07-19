
#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout<<"Cat constructor initialized."<<std::endl;
}

Cat::~Cat()
{
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
