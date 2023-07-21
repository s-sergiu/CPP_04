
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		std::string getType() const;
		Animal();
		Animal(const Animal &copy);
		Animal& operator = (const Animal &src);
		virtual ~Animal();
		virtual void makeSound() const;
};

#endif
