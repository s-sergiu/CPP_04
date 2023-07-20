
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout<<"WrongAnimal constructor initialized."<<std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout<<"WrongAnimal destructor initialized."<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	type = copy.type;	
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal &src)
{
	this->type = src.type;
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout<<"WrongAnimal * NO SOUND *"<<std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}
