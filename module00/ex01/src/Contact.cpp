/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becanals <becanals@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 22:47:00 by becanals          #+#    #+#             */
/*   Updated: 2026/10/31 16:18:49 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool	Contact::isEmpty()
{
	return this->_FirstName.empty();
}

bool	Contact::loadInfo()
{
	Contact		tmp;

	std::system("clear");
	std::cout << "Adding Contact..." << std::endl << std::endl;
	if (!tmp._setMemberValue("First Name", &(tmp._FirstName)))
		return (false);
	if (!tmp._setMemberValue("Last Name", &(tmp._LastName)))
		return (false);
	if (!tmp._setMemberValue("Nick Name", &(tmp._NickName)))
		return (false);
	if (!tmp._setMemberValue("Phone Number", &(tmp._PhoneNumber)))
		return (false);
	if (!tmp._setMemberValue("Darkest Secret", &(tmp._DarkestSecret)))
		return (false);
	(*this) = tmp;
	return (true);
}

bool	Contact::_setMemberValue(std::string name, std::string *str)
{
	std::cout << "Please input the " << name << ": ";
	std::getline(std::cin, *str);
	std::cout << std::endl;
	if ((*str).empty())
		return (false);
	return (true);
}

std::string	Contact::getFirstName()
{
	return (_FirstName);
}

std::string	Contact::getLastName()
{
	return (_LastName);
}

std::string	Contact::getNickName()
{
	return (_NickName);
}

std::string	Contact::getPhoneNumber()
{
	return (_PhoneNumber);
}

std::string	Contact::getDarkestSecret()
{
	return (_DarkestSecret);
}
