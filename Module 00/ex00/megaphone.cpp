/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 09:48:44 by afatir            #+#    #+#             */
/*   Updated: 2023/08/05 21:29:08 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	if (ac < 2){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	for (int i = 1; i < ac; i++)
	{
		std::string arg = av[i];
		for (size_t j = 0; j < arg.length(); j++)
			std::cout << (char)toupper(arg[j]);
	}
	std::cout << std::endl;
	return 0;
}
