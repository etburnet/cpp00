/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:19:38 by eburnet           #+#    #+#             */
/*   Updated: 2024/11/30 16:12:45 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.class.hpp"

Contact::Contact()
{
	//std::cout << "Contact constructor" << std::endl;
	return ;
}

Contact::~Contact()
{
	//std::cout << "Contact destructor" << std::endl;
	return ;
}

void Contact::setIndex(int	index)
{
	this->_index = index;
}
int Contact::getIndex()
{
	return (this->_index);
}

void Contact::setCreationNbr(int	creation_nbr)
{
	this->_creation_nbr = creation_nbr;
}
int Contact::getCreationNbr()
{
	return (this->_creation_nbr);
}

void Contact::setName(std::string	name)
{
	this->_name = name;
}
int Contact::getName()
{
	if (_name.empty() == true)
		return (NULL);
	return (this->_creation_nbr);
}