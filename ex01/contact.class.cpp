/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:19:38 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/11 14:11:25 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.class.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void Contact::setIndex(int	index)
{
	this->_index = index;
	return ;
}

int Contact::getIndex()
{
	return (this->_index);
}

void Contact::setCreationNbr(int	creation_nbr)
{
	this->_creation_nbr = creation_nbr;
	return ;
}

int Contact::getCreationNbr()
{
	return (this->_creation_nbr);
}

void Contact::setName(std::string	name)
{
	this->_name = name;
	return ;
}

std::string Contact::getName()
{
	if (_name.empty() == true)
		return ("");
	return (this->_name);
}

void Contact::setLastName(std::string	last_name)
{
	this->_last_name = last_name;
	return ;
}

std::string Contact::getLastName()
{
	if (_last_name.empty() == true)
		return ("");
	return (this->_last_name);
}

void Contact::setNickName(std::string	nickname)
{
	this->_nickname = nickname;
	return ;
}

std::string Contact::getNickName()
{
	if (_nickname.empty() == true)
		return ("");
	return (this->_nickname);
}

void Contact::setPhoneNbr(std::string	phone_nbr)
{
	this->_phone_nbr = phone_nbr;
	return ;
}

std::string Contact::getPhoneNbr()
{
	if (_phone_nbr.empty() == true)
		return ("");
	return (this->_phone_nbr);
}

void Contact::setDarkestSecret(std::string	darkest_secret)
{
	this->_darkest_secret = darkest_secret;
	return ;
}

std::string Contact::getDarkestSecret()
{
	if (_darkest_secret.empty() == true)
		return ("");
	return (this->_darkest_secret);
}
