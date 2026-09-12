/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becanals <becanals@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 20:18:56 by becanals          #+#    #+#             */
/*   Updated: 2026/09/12 12:27:22 by becanals         ###   ########.fr       */
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

	public:
		PhoneBook();

		void	list_contacts();
		void	add_contact(Contact contact);
		void	show_contact(int index);
};

#endif
