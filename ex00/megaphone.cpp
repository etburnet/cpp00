/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:41:32 by eburnet           #+#    #+#             */
/*   Updated: 2024/11/26 17:47:17 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include <string>

int	main(int argc, char *argv[])
{
	int	i = 1;
	int	j;
	
	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				argv[i][j] = std::toupper(argv[i][j]);
				j++;
			}
			std::cout << argv[i];
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
