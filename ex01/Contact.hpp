/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:39:36 by sasalama          #+#    #+#             */
/*   Updated: 2023/04/24 11:20:00 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string	f_name;
		std::string	l_name;
		std::string	n_name;
		std::string	p_nb;
		std::string	d_s;
	public:
		Contact(void);
		~Contact(void);
		std::string	get_f_name(void);
		std::string	get_l_name(void);
		std::string	get_n_name(void);
		std::string	get_p_nb(void);
		std::string	get_d_s(void);
		void	set_f_name(std::string str);
		void	set_l_name(std::string str);
		void	set_n_name(std::string str);
		void	set_p_nb(std::string str);
		void	set_d_s(std::string str);
};

#endif
