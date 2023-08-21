/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:27:08 by afatir            #+#    #+#             */
/*   Updated: 2023/08/21 10:42:33 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap S("ST");
	S.attack("enemy");
	S.takeDamage(30);
	S.beRepaired(10);
	S.guardGate();
	std::cout << std::endl;
	//copy const
	ScavTrap S2(S);
	std::cout << std::endl;
	//copy assi
	ScavTrap S3;
	S3 = S2;
	std::cout << std::endl;

	// ClapTrap *c = new (ScavTrap);
	// delete c;
	// return 0;
}
