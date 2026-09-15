/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becanals <becanals@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 21:23:16 by becanals          #+#    #+#             */
/*   Updated: 2026/09/15 21:04:59 by bizcru           ###   ########.fr       */
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
	std::cout << "try again!" << std::endl;
}
