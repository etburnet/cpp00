/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:07:00 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/11 17:33:22 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.class.hpp"
#include "contact.class.hpp"
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <sstream>

std::string	ft_get(std::string msg)
{
	std::string	tmp;

	while (tmp.empty() || tmp.length() == 0)
	{
		std::cout << msg << std::endl;
		std::getline(std::cin, tmp);
		if(!std::cin)
			return ("");
	}
	return(tmp);
}

int	PhoneBook::ft_nb_contact(void)
{
	int	i = 0;

	while (i < 8 && this->contact[i].getName() != "" )
		i++;
	return (i);
}

int	ft_check_entry(std::string tmp)
{
	if (tmp.length() <= 0)
		return (std::cout << "Error" << std::endl, 1);
	return (0);
}

int	PhoneBook::ft_add(void)
{
	int	oldest;
	int	i;
	std::string	tmp;

	i = get_nb_contact();
	oldest = i % 8;
	this->contact[oldest].setIndex(oldest);
	this->contact[oldest].setCreationNbr(i);
	tmp = ft_get("First Name: ");
	if (ft_check_entry(tmp) == 1)
		return (1);
	this->contact[oldest].setName(tmp);
	tmp = ft_get("Last Name: ");
	if (ft_check_entry(tmp) == 1)
		return (1);
	this->contact[oldest].setLastName(tmp);
	tmp = ft_get("NickName: ");
	if (ft_check_entry(tmp) == 1)
		return (1);
	this->contact[oldest].setNickName(tmp);
	tmp = ft_get("Phone number: ");
	if (ft_check_entry(tmp) == 1)
		return (1);
	this->contact[oldest].setPhoneNbr(tmp);
	tmp = ft_get("Darkest Secret: ");
	if (ft_check_entry(tmp) == 1)
		return (1);
	this->contact[oldest].setDarkestSecret(tmp);
	set_nb_contact(i+1);
	return (0);
}

void	PhoneBook::ft_print_tab(std::string var, int index, int last)
{
	if (var.empty() == true && index >= 0)
	{
		std::cout << std::setw(10);
		std::cout << index;
	}
	else if (var.length() > 9)
	{
		std::cout << std::setw(9);
		std::cout << var.substr(0, 9) << ".";
	}
	else
	{
		std::cout << std::setw(10);
		std::cout << var;
	}
	if (last != 1)
		std::cout << "|";
	else
		std::cout << std::endl;
	return ;
}

int	PhoneBook::ft_print_contact()
{
	int			i;
	int			j;
	std::string index;
	
	i = -1;
	while(i < 0 || i >= get_nb_contact())
	{
		index = ft_get("Enter an index for further informations");
		if (index.length() <= 0)
			return (std::cout << "Error" << std::endl, 1);
		i = atoi(index.c_str());
		j = 0;
		while (index[j])
		{
			if (isdigit(index[j]) == 0)
			{
				i = -1;
				break ;
			}
			j++;
		}
	}
	std::cout << "Index: ";
	std::cout << index << std::endl;
	std::cout << "First Name: ";
	std::cout << this->contact[i].getName() << std::endl;
	std::cout << "Last Name: ";
	std::cout << this->contact[i].getLastName() << std::endl;
	std::cout << "Nickname: ";
	std::cout << this->contact[i].getLastName() << std::endl;
	std::cout << "Phone number: ";
	std::cout << this->contact[i].getPhoneNbr() << std::endl;
	std::cout << "Darkest Secret: ";
	std::cout << this->contact[i].getDarkestSecret() << std::endl;
	return (0);
}

int	PhoneBook::ft_search(void)
{
	
	int	i = 0;
	int	nb_contact;
 	std::stringstream ss;
 	std::string str;
	
	nb_contact = ft_nb_contact();
	if (nb_contact == 0)
		return (std::cout << "ADD a contact first" << std::endl, 0);
	std::cout << std::setw(10);
	std::cout << "index" << "|";
	std::cout << std::setw(10);
	std::cout << "first name" << "|";
	std::cout << std::setw(10);
	std::cout << "last name" << "|";
	std::cout << std::setw(10);
	std::cout << "nickname" << std::endl;
	while (i < nb_contact)
	{
		ft_print_tab("", i, 0);
		ft_print_tab(this->contact[i].getName(), -1, 0);
		ft_print_tab(this->contact[i].getLastName(), -1, 0);
		ft_print_tab(this->contact[i].getNickName(), -1, 1);
		i++;
	}
	if (ft_print_contact() == 1)
		return (1);
	return (0);
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
			return (std::cout << "Error" << std::endl, 1);
		if (cmd.compare("ADD") == 0)
		{
			if(phonebook.ft_add() == 1)
				return (1);
			start = 1;
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			if(phonebook.ft_search() == 1)
				return (1);
			start = 1;
		}
		else if (cmd.compare("EXIT") == 0)
			return (0);
		else
			std::cout << "The only available commands are ADD, SEARCH and EXIT" << std::endl;
		
	}
	return (0);
}
