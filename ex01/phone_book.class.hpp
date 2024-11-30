/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:13:08 by eburnet           #+#    #+#             */
/*   Updated: 2024/11/30 16:00:51 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP

#include "contact.class.hpp"

class	PhoneBook
{
	private:
		Contact contact[8];
	public:
		PhoneBook();
		~PhoneBook();
		void	PhoneBook::ft_add(void);
		void	PhoneBook::ft_search(void);
		int		PhoneBook::ft_oldest(void);
		int		PhoneBook::ft_nb_contact(void);


};

#endif