/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becanals <becanals@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 21:23:16 by becanals          #+#    #+#             */
/*   Updated: 2026/09/08 21:31:31 by becanals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (!argc)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else 
	{
		std::cout << argv[1] << "\n";
	}
	return (0);
}
