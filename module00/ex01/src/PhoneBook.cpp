/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becanals <becanals@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 22:23:44 by becanals          #+#    #+#             */
/*   Updated: 2026/10/31 16:32:56 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_oldest_c = -1;
}

static void	waitEnter()
{
	std::string	forget;

	std::cout << "Press enter to continue..." << std::endl;
	std::getline(std::cin, forget);
	std::system("clear");
}

static void	throwMessage(std::string str)
{
	std::cout << str << std::endl;
	waitEnter();
}

void	PhoneBook::AddContact()
{
	if (!_contacts[(_oldest_c + 1) % 8].loadInfo())
		return (throwMessage("No fields can be empty :("));
	_oldest_c++;
	_oldest_c %= 8;
	throwMessage("Contact added successfully!");
}

void	PhoneBook::_printSummaryTable()
{
	int	j;

	std::cout << "// Capçalera placeholder //" << std::endl;
	for (int i = 0; i <= 7; i++)
	{
		j = (_oldest_c - i);
		if (j < 0)
			j += 8;
		if (_contacts[j].isEmpty())
			break ;
		std::cout << _contacts[j].getFirstName() << std::endl;
	}
}

void	PhoneBook::_printContactDetails(int i)
{
	std::cout << "     First Name: " << _contacts[i].getFirstName() << std::endl;
	std::cout << "      Last Name: " << _contacts[i].getLastName() << std::endl;
	std::cout << "      Nick Name: " << _contacts[i].getNickName() << std::endl;
	std::cout << "   Phone Number: " << _contacts[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest Sectret: " << _contacts[i].getDarkestSecret() << std::endl;
}

void	PhoneBook::Search()
{
	int	idx;
	
	system("clear");
	if (_oldest_c == -1)
		return (throwMessage("No Contacts yet!"));
	std::system("clear");
	_printSummaryTable();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Select the contact index: ";
	std::cin >> idx;
	while (std::cin.fail())
	{
		std::cout << "Please enter a valid integer!" << std::endl;
		std::cin.clear();
		std::cin.ignore();
		std::cin >> idx;
	}
	std::cin.ignore();
 	if (idx > 8 || _contacts[(idx + _oldest_c) % 8].isEmpty())
		return (throwMessage("Wrong index!"));
	system("clear");
	_printContactDetails((idx + _oldest_c) % 8);
	waitEnter();
}
