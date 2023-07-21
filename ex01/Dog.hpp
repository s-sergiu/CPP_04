
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &copy);
		Dog& operator = (const Dog &src);
		~Dog();
		void makeSound() const;
		void generateIdeas (std::string ideas[100]);
		void printIdeas (void);
};

#endif
