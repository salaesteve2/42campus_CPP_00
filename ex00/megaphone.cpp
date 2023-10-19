/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:41:05 by sasalama          #+#    #+#             */
/*   Updated: 2023/04/19 10:42:04 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * \n";
		return (0);
	}
	x = 1;
	while (argv[x])
	{
		y = 0;
		while (argv[x][y])
		{
			argv[x][y] = toupper(argv[x][y]);
			std::cout << argv[x][y];
			y++;
		}
		if (argv[x + 1])
			std::cout << " ";
		x++;
	}
	std::cout << "\n";
	return (0);
}
