/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becanals <becanals@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 22:23:44 by becanals          #+#    #+#             */
/*   Updated: 2026/09/15 21:03:54 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	write_c_on_list(Contact c)
{
	std::cout << c.getName() << std::endl;
}

PhoneBook::PhoneBook()
{
	_oldest_c = 0;
}

void	PhoneBook::show_contact(int index)
{
	_contacts[index].writeDetails();
}

void	PhoneBook::AddContact()
{
	std::cout << "Adding Contact..." << std::endl;
	//_contacts[_oldest_c] = contact;
	//_oldest_c++;
	//_oldest_c %= 8;
}

void	PhoneBook::Search()
{
	int	j;
	std::cout << "Searching..." << std::endl;

	for (int i = 1; i <= 8; i++)
	{
		j = (_oldest_c + i) % 8;
		if (_contacts[j].isEmpty())
			break ;
		write_c_on_list(_contacts[j]);
	}
}


