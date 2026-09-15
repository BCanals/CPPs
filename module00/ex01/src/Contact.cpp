/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becanals <becanals@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 22:47:00 by becanals          #+#    #+#             */
/*   Updated: 2026/09/15 22:08:09 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::writeDetails()
{
	std::cout << "write_details is WIP" << std::endl;
}

bool	Contact::isEmpty()
{
	if (FirstName.size() == 0)
		return true;
	return false;
}

bool	Contact::addInfo()
{
	std::system("clear");
	std::cout << "adding Info" << std::endl;
	return (true);
}
