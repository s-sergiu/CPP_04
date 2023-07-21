
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	std::cout<<"==============================="<<std::endl;
	std::string ideas[100] = { 
	"one",
	"two",
	"three",
	};

	Cat basic;
	basic.generateIdeas(ideas);
	basic.printIdeas();

	std::cout<<"==============================="<<std::endl;
	Cat basic2 = basic;
	basic2.printIdeas();
	return 0;
}
