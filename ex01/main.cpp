/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:39:24 by sasalama          #+#    #+#             */
/*   Updated: 2023/04/19 13:08:14 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	ph;
	std::string	str;

	while (str != "EXIT")
	{
		std::cout << "Enter command > ";
		std::getline(std::cin, str);
		if (str == "ADD")
			ph.add();
		else if (str == "SEARCH")
			ph.search();
	}
	return (0);
}
