/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:35:19 by afatir            #+#    #+#             */
/*   Updated: 2023/09/13 10:36:57 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#define RED "\e[0;31m"
#define WHI "\e[0;37m"
#define GRE "\e[0;32m"
#define YEL "\e[0;33m"

#include<iostream>
#include<string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap& other);
	FragTrap& operator=(const FragTrap& other);

	void highFivesGuys();
	void attack(const std::string& target);
};

#endif