
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
	Cat test1;
	delete(animals[0]);
	delete(animals[1]);
	return 0;
}
