
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

	Animal test1;

	animals[0]->makeSound();
	animals[1]->makeSound();
	delete(animals[0]);
	delete(animals[1]);

	return 0;
}
