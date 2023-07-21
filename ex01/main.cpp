/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:09:02 by ssergiu           #+#    #+#             */
/*   Updated: 2023/07/22 01:09:04 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	std::string ideas[100] = { 
	"one",
	"two",
	"three",
	};

	std::string ideas2[100] = { 
	"four",
	"five",
	"seven",
	};

	std::cout<<"s==============================="<<std::endl;
	Cat basic;
	basic.generateIdeas(ideas);
	std::cout<<"==============================="<<std::endl;
	basic.printIdeas();
	std::cout<<"==============================="<<std::endl;

	Cat basic3;
	basic3.generateIdeas(ideas2);
	basic3.printIdeas();
	basic3 = basic;
	std::cout<<"==============================="<<std::endl;
	basic3.printIdeas();
	std::cout<<"==============================="<<std::endl;
	Cat test;
	std::cout<<"==============================="<<std::endl;
	std::cout<<"+++++++++++++++++++++++++++++++"<<std::endl;
	Cat tmp;
	tmp = test;
	std::cout<<"+++++++++++++++++++++++++++++++"<<std::endl;
	//system("leaks main");
	return 0;
}
