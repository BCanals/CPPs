/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becanals <becanals@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 22:23:44 by becanals          #+#    #+#             */
/*   Updated: 2026/09/12 12:27:35 by becanals         ###   ########.fr       */
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

void	PhoneBook::add_contact(Contact contact)
{
	_contacts[_oldest_c] = contact;
	_oldest_c++;
	_oldest_c %= 8;
}

void	PhoneBook::show_contact(int index)
{
	_contacts[index].writeDetails();
}

void	PhoneBook::list_contacts()
{
	int	j;

	for (int i = 1; i <= 8; i++)
	{
		j = (_oldest_c + i) % 8;
		if (_contacts[j].isEmpty())
			break ;
		write_c_on_list(_contacts[j]);
	}
}
