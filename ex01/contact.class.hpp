/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:14:09 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/10 11:16:16 by eburnet          ###   ########.fr       */
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
		void setIndex(int	index);
		int getIndex();
		void setCreationNbr(int	creation_nbr);
		int getCreationNbr();
		void setName(std::string	name);
		std::string getName();
		void setLastName(std::string	last_name);
		std::string getLastName();
		void setNickName(std::string	nickname);
		std::string getNickName();
		void setPhoneNbr(std::string	phone_nbr);
		std::string getPhoneNbr();
		void setDarkestSecret(std::string	darkest_secret);
		std::string getDarkestSecret();
};

#endif