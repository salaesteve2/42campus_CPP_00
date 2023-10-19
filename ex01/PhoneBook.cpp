/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:39:28 by sasalama          #+#    #+#             */
/*   Updated: 2023/04/24 10:11:23 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	std::cout << "Started" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Finished" << std::endl;
}

void	PhoneBook::add(void)
{
	std::string	str;

	str = "";
	while (str == "")
	{
		std::cout << "First Name: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->index % 8].set_f_name(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "Last Name: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->index % 8].set_l_name(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "Nick Name: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->index % 8].set_n_name(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "Phone Number: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->index % 8].set_p_nb(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "Darkest Secret: ";
		if (std::getline(std::cin, str) && str != "")
			this->contacts[this->index % 8].set_d_s(str);
	}
	this->index++;
	std::cout << "Added" << std::endl;
}

std::string	ft_adapt(std::string str)
{
	std::string	str2;
	int			x;

	if (str.length() > 10)
	{
		while (str.length() > 9)
			str.erase(str.end() - 1);
		str.append(".");
		str2 = str;
	}
	else
	{
		x = str.length();
		while (x < 10)
		{
			str2.append(" ");
			x++;
		}
		str2.append(str);
	}
	return (str2);
}

void	PhoneBook::search(void)
{
	std::string	str;
	int			x;

	if (this->index == 0)
	{
		std::cout << "Phonebook empty!" << std::endl;
		return ;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	x = 1;
	while (x < this->index + 1 && x < 9)
	{
		std::cout << "|         " << x;
		str = this->contacts[(x - 1) % 8].get_f_name();
		str = ft_adapt(str);
		std::cout << "|" << str;
		str = this->contacts[(x - 1) % 8].get_l_name();
		str = ft_adapt(str);
		std::cout << "|" << str;
		str = this->contacts[(x - 1) % 8].get_n_name();
		str = ft_adapt(str);
		std::cout << "|" << str << "|";
		std::cout << std::endl;
		x++;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "Index: ";
	str = "";
	while (str == "")
	{
		if (std::getline(std::cin, str) && str != "" && str[0] >= '1'
			&& str[0] <= '8' && str[0] - '0' <= this->index)
			this->print(this->contacts[str[0] - 1 - '0']);
		else
			std::cout << "Error in index." << std::endl;
	}
}

void	PhoneBook::print(Contact contact)
{
	std::cout << "First name: " << contact.get_f_name() << std::endl;
	std::cout << "Last name: " << contact.get_l_name() << std::endl;
	std::cout << "Nick name: " << contact.get_n_name() << std::endl;
	std::cout << "Phone number: " << contact.get_p_nb() << std::endl;
	std::cout << "Darkest secret: " << contact.get_d_s() << std::endl;
}

