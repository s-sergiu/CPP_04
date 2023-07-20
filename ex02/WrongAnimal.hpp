
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		void makeSound() const;
		std::string getType() const;
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal& operator = (const WrongAnimal &src);
		virtual ~WrongAnimal();
};

#endif
