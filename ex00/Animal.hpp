
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		void makeSound();
		std::string getType();
		Animal();
		Animal(const Animal &copy);
		Animal& operator = (const Animal &src);
		~Animal();
};

#endif
