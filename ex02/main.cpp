
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *animals[2] = {
		new Dog(),
		new Cat(),
	};

	Dog test;
	Dog test1;
	delete(animals[0]);
	delete(animals[1]);

	std::cout<<"==============================="<<std::endl;

	std::string ideas[100] = {
	"one",
	"two",
	"three",
	};

	test1.generateIdeas(ideas);
	test1.printIdeas();

	std::cout<<"==============================="<<std::endl;
	Dog test3;
	Dog test4(test1);

	test3 = test1;
	test3.printIdeas();
	std::cout<<"==============================="<<std::endl;
	test4.printIdeas();
	return 0;
}
