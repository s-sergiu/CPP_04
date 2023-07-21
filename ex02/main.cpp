/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:13:03 by ssergiu           #+#    #+#             */
/*   Updated: 2023/07/22 01:13:04 by ssergiu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	animals[0]->makeSound();
	animals[1]->makeSound();
	delete(animals[0]);
	delete(animals[1]);

	return 0;
}
