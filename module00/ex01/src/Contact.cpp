/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becanals <becanals@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 22:47:00 by becanals          #+#    #+#             */
/*   Updated: 2026/10/24 17:00:54 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool	Contact::isEmpty()
{
	if (FirstName.size() == 0)
		return true;
	return false;
}

bool	Contact::writeDetails()
{
	std::cout << "Writing details..." << std::endl;
	return (true);
}

bool	errorAddingInfo()
{
	std::string	forget;

	std::cout << "Sorry, no fields can be empty!" << std::endl;
	std::cout << "Press enter to continue..." << std::endl;
	std::getline(std::cin, forget);
	std::system("clear");
	return (false);
}

bool	Contact::addInfo()
{
	Contact		tmp;
	std::string	forget;

	std::system("clear");
	std::cout << "Adding Contact..." << std::endl << std::endl;
	std::cin.ignore();
	if (!tmp.setMemberValue("First Name", &(tmp.FirstName)))
		return (errorAddingInfo());
	if (!tmp.setMemberValue("Last Name", &(tmp.LastName)))
		return (errorAddingInfo());
	if (!tmp.setMemberValue("Nick Name", &(tmp.NickName)))
		return (errorAddingInfo());
	if (!tmp.setMemberValue("Phone Number", &(tmp.PhoneNumber)))
		return (errorAddingInfo());
	if (!tmp.setMemberValue("Darkest Secret", &(tmp.DarkestSecret)))
		return (errorAddingInfo());
	*this = tmp;
	std::cout << "Contact succesfully added!" << std::endl;
	std::cout << "Press enter to continue..." << std::endl;
	std::getline(std::cin, forget);
	std::system("clear");
	return (true);
}

bool	Contact::setMemberValue(std::string name, std::string *str)
{
	std::cout << "Please input the " << name << ": ";
	std::getline(std::cin, *str);
	std::cout << std::endl;
	if ((*str).empty())
		return (false);
	return (true);
}
