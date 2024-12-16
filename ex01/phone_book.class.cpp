/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:44:12 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/14 12:33:53 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phone_book.class.hpp"

PhoneBook::PhoneBook(void)
{
	_nb_contact = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

int	PhoneBook::get_nb_contact()
{
	return (this->_nb_contact);
}

void	PhoneBook::set_nb_contact(int nb_contact)
{
	_nb_contact = nb_contact;
	return ;
}