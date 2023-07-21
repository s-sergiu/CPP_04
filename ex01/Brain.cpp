
#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"Brain constructor initialized."<<std::endl;
}

Brain::~Brain()
{
	std::cout<<"Brain destructor initialized."<<std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];	
}

Brain& Brain::operator = (const Brain &src)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return *this;
}
