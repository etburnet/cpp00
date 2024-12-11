/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:13:08 by eburnet           #+#    #+#             */
/*   Updated: 2024/12/11 17:11:58 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP

#include "contact.class.hpp"

class	PhoneBook
{
	private:
		Contact contact[8];
		int		_nb_contact;
	public:
		PhoneBook();
		~PhoneBook();
		int		ft_add(void);
		int		ft_search(void);
		int		ft_nb_contact(void);
		void	ft_print_tab(std::string var, int index, int last);
		int		ft_print_contact(void);
		int		get_nb_contact(void);
		void	set_nb_contact(int nb_contact);
};

#endif