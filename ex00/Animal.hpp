
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
	private:
		std::string type;
	public:
		Animal();
		Animal(const Animal &copy);
		Animal& operator = (const Animal &src);
		~Animal();
};

#endif
