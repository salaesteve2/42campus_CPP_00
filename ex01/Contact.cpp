/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:39:18 by sasalama          #+#    #+#             */
/*   Updated: 2023/04/19 10:40:42 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::get_f_name(void)
{
	return (this->f_name);
}

std::string	Contact::get_l_name(void)
{
	return (this->l_name);
}

std::string	Contact::get_n_name(void)
{
	return (this->n_name);
}

std::string	Contact::get_p_nb(void)
{
	return (this->p_nb);
}

std::string	Contact::get_d_s(void)
{
	return (this->d_s);
}

void	Contact::set_f_name(std::string str)
{
	this->f_name = str;
}

void	Contact::set_l_name(std::string str)
{
	this->l_name = str;
}

void	Contact::set_n_name(std::string str)
{
	this->n_name = str;
}

void	Contact::set_p_nb(std::string str)
{
	this->p_nb = str;
}

void	Contact::set_d_s(std::string str)
{
	this->d_s = str;
}
