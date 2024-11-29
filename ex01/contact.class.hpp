/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:14:09 by eburnet           #+#    #+#             */
/*   Updated: 2024/11/29 16:22:55 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class Contact
{
	public:
		int			index;
		int			creation_nbr;
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_nbr;
		std::string	darkest_secret;
		Contact();
		~Contact();
};

#endif