/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:07:00 by eburnet           #+#    #+#             */
/*   Updated: 2024/11/29 17:03:21 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.class.hpp"
#include "contact.class.hpp"
#include <iostream>

int	ft_oldest(PhoneBook *phonebook)
{
	int	i = 0;
	int	oldest;
	
	oldest = phonebook->contact[i].creation_nbr;
	while (i < 8)
	{
		if (phonebook->contact[i].creation_nbr < oldest)
			oldest = phonebook->contact[i].creation_nbr;
		i++;
	}
	return (phonebook->contact[oldest].index);
}

std::string	ft_get(std::string msg)
{
	std::string	tmp;

	while (tmp.empty())
	{
		std::cout << msg;
		std::getline(std::cin, tmp);
	}
	return(tmp);
}

void	ft_add(PhoneBook *phonebook)
{
	static int	i;
	int			oldest;


	if(i > 7)
		oldest = ft_oldest(phonebook);
	else
		oldest = i;
	phonebook->contact[oldest].index = oldest;
	phonebook->contact[oldest].creation_nbr = i;
	phonebook->contact[oldest].name = ft_get("Name: ");
	phonebook->contact[oldest].last_name = ft_get("Last Name: ");
	phonebook->contact[oldest].nickname = ft_get("NickName: ");
	phonebook->contact[oldest].phone_nbr = ft_get("Phone number: ");
	phonebook->contact[oldest].darkest_secret = ft_get("Darkest Secret: ");
	i++;
	return ;
}

void	ft_search(PhoneBook *phonebook)
{
	return ;
}

int	main(void)
{
	int			start = 1;
	std::string cmd;

	PhoneBook phonebook;
	while (1)
	{
		if(start == 1)
		{
			std::cout << "Welcome in this awesome phonebook you can ADD or SEARCH a contact and EXIT" << std::endl;
			start = 0;
		}
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
		{
			ft_add(&phonebook);
			start = 1;
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			ft_search(&phonebook);
			start = 1;
		}
		else if (cmd.compare("EXIT") == 0)
			return (0);
		else
			std::cout << "The only available commands are ADD, SEARCH and EXIT" << std::endl;
		
	}
	return (0);
}
