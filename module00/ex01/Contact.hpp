/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becanals <becanals@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 22:46:42 by becanals          #+#    #+#             */
/*   Updated: 2026/09/12 12:28:35 by becanals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT
# define CONTACT
# include <string>
# include <iostream>

class Contact
{
	private:
		std::string name;
		

	public:
		
		void		writeDetails();
		std::string	getName();
		bool		isEmpty();
};

#endif
