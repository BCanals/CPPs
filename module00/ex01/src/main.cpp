/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becanals <becanals@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 21:23:16 by becanals          #+#    #+#             */
/*   Updated: 2026/09/11 23:08:07 by becanals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	std::string s;

	if (s.size() == 0)
		std::cout << "yep, it words\n";


	if (argc == 1)
		std::cout << s;
	else 
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j]; j++)
			{
				std::cout << (char)toupper(argv[i][j]);
			}
		}
		std::cout << "\n";
	}
	return (0);
}
