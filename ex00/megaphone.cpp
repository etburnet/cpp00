/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:41:32 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/14 12:33:32 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include <string>

int	main(int argc, char *argv[])
{
	int	i = 1;
	int	j;
	std::string s;
	
	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			s = argv[i];
			while (s[j])
			{
				s[j] = std::toupper(s[j]);
				j++;
			}
			std::cout << s;
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
