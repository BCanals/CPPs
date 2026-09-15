/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becanals <becanals@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 20:18:56 by becanals          #+#    #+#             */
/*   Updated: 2026/09/15 20:54:17 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_oldest_c;
		void	show_contact(int index);

	public:
		PhoneBook();

		void	AddContact();
		void	Search();
};

#endif
