
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

Cat::Cat(const Cat &copy) : Animal()
{
	brain = new Brain();
	for (int i = 0; i < 100; i++)	
	{
		if (copy.brain->getIdea(i).empty())
			break;
		brain->setIdea(i, copy.brain->getIdea(i));	
	}
	type = copy.type;	
}

Cat& Cat::operator = (const Cat &src)
{
	for (int i = 0; i < 100; i++)	
	{
		if (src.brain->getIdea(i).empty())
			break;
		this->brain->setIdea(i, src.brain->getIdea(i));	
	}
	this->type = src.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout<<"*Moew*"<<std::endl;
}

void Cat::generateIdeas(std::string ideas[100])
{
	for (int i = 0; i < 100; i++)	
	{
		if (ideas[i].empty())
			break;
		brain->setIdea(i, ideas[i]);
	}
}

void Cat::printIdeas(void)
{
	for (int i = 0; i < 100; i++)	
	{
		if (brain->getIdea(i).empty())
			break;
		std::cout<<brain->getIdea(i)<<std::endl;
	}
}
