
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout<<"WrongCat constructor initialized."<<std::endl;
}

WrongCat::~WrongCat()
{
	std::cout<<"WrongCat destructor initialized."<<std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
	type = copy.type;	
}

WrongCat& WrongCat::operator = (const WrongCat &src)
{
	this->type = src.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout<<"*WrongCat Moew*"<<std::endl;
}
