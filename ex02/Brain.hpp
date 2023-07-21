
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &copy);
		Brain& operator = (const Brain &src);
		virtual ~Brain();
		std::string getIdea(int idx);
		void setIdea(int id, std::string idea);
};

#endif
