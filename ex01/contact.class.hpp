/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:14:09 by eburnet           #+#    #+#             */
/*   Updated: 2024/11/30 16:12:25 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class Contact
{
	private:
		int			_index;
		int			_creation_nbr;
		std::string	_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_nbr;
		std::string	_darkest_secret;
	public:
		Contact();
		~Contact();
		void Contact::setIndex(int	index);
		int Contact::getIndex();
		void Contact::setCreationNbr(int	creation_nbr);
		int Contact::getCreationNbr();
		int Contact::getName();
		void Contact::setName(std::string	name);
};

#endif