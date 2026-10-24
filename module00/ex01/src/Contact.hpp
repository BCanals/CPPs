/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becanals <becanals@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 22:46:42 by becanals          #+#    #+#             */
/*   Updated: 2026/10/24 16:46:49 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT
# define CONTACT
# include <string>
# include <iostream>
# include <cstdlib>
# include <climits>

class Contact
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkestSecret;

	public:
		bool	setMemberValue(std::string, std::string *);
		bool	isEmpty();
		bool	addInfo();
		bool	writeDetails();
		bool	setFirstName();
		bool	setLastName();
		bool	setNickName();
		bool	setPhoneNumber();
		bool	setDarkestSecret();
};

#endif
