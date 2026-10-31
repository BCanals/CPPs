/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becanals <becanals@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 21:23:16 by becanals          #+#    #+#             */
/*   Updated: 2026/10/25 11:17:37 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

void	print_help();

int main()
{
	PhoneBook	d;
	std::string	input;

	while (1)
	{
		std::cout << "Waiting for comand: ";
		std::cin >> input;
		std::cin.ignore();
		if (input == "EXIT")
		{
			std::cout << "See you soon! :)" << std::endl;
			break ;
		}
		else if (input == "ADD")
			d.AddContact();
		else if (input == "SEARCH")
			d.Search();
		else 
			print_help();
	}
}

void	print_help()
{
	std::cout << "invalid input, try again!" << std::endl;
}
