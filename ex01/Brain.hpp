
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &copy);
		Brain& operator = (const Brain &src);
		virtual ~Brain();
		std::string getIdea(int index);
		void setIdea(int index, std::string _idea);
};

#endif
