/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:07:00 by eburnet           #+#    #+#             */
/*   Updated: 2024/11/30 16:02:10 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.class.hpp"
#include "contact.class.hpp"
#include <iostream>
#include <stdlib.h>

int	PhoneBook::ft_oldest(void)
{
	int	i = 0;
	int	oldest;
	
	oldest = this->contact[i].creation_nbr;
	while (i < 8)
	{
		if (this->contact[i].creation_nbr < oldest)
			oldest = this->contact[i].creation_nbr;
		i++;
	}
	return (this->contact[oldest].index);
}

std::string	ft_get(std::string msg)
{
	std::string	tmp;

	while (tmp.empty())
	{
		std::cout << msg << std::endl;
		std::getline(std::cin, tmp);
		if(!std::cin)
			exit(1);
	}
	return(tmp);
}

void	PhoneBook::ft_add(void)
{
	static int	i;
	int			oldest;


	if(i > 7)
		oldest = this->ft_oldest();
	else
		oldest = i;
	this->contact[oldest].index = oldest;
	this->contact[oldest].creation_nbr = i;
	this->contact[oldest].name = ft_get("Name: ");
	this->contact[oldest].last_name = ft_get("Last Name: ");
	this->contact[oldest].nickname = ft_get("NickName: ");
	this->contact[oldest].phone_nbr = ft_get("Phone number: ");
	this->contact[oldest].darkest_secret = ft_get("Darkest Secret: ");
	i++;
	return ;
}

int	PhoneBook::ft_nb_contact(void)
{
	int	i = 0;

	while (this->contact[i].name.empty() == false)
		i++;
	return (i);
}

void	PhoneBook::ft_search(void)
{
	int	i = 0;
	int	nb_contact;

	nb_contact = ft_nb_contact();
	if (nb_contact == 0)
	{
		std::cout << "ADD a contact first" << std::endl;
		return ;
	}
	std::cout << "index |" << " first name |" << " last name |" << " nickname" << std::endl;
	while (i < nb_contact)
	{
		std::cout << this->contact[i].index << " | ";
		std::cout << this->contact[i].name << " | ";
		std::cout << this->contact[i].last_name << " | ";
		std::cout << this->contact[i].nickname << std::endl;
		i++;
	}
	
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
		if(!std::cin)
			exit(1);
		if (cmd.compare("ADD") == 0)
		{
			phonebook.ft_add();
			start = 1;
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			phonebook.ft_search();
			start = 1;
		}
		else if (cmd.compare("EXIT") == 0)
			return (0);
		else
			std::cout << "The only available commands are ADD, SEARCH and EXIT" << std::endl;
		
	}
	return (0);
}
