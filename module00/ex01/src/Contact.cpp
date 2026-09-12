/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becanals <becanals@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 22:47:00 by becanals          #+#    #+#             */
/*   Updated: 2026/09/12 12:29:28 by becanals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::writeDetails()
{
	std::cout << "write_details is WIP" << std::endl;
}

std::string Contact::getName()
{
	return name;
}

bool Contact::isEmpty()
{
	if (name.size() == 0)
		return true;
	return false;
}
