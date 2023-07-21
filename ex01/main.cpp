
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

	std::string ideas2[100] = { 
	"four",
	"five",
	"seven",
	};

	Cat basic;
	Cat basic2;
	basic.generateIdeas(ideas);
	basic2.generateIdeas(ideas2);
	basic.printIdeas();

	std::cout<<"==============================="<<std::endl;
	Cat basic3= basic;
	basic3.printIdeas();
	return 0;
}
