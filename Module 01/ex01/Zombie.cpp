/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:34:40 by afatir            #+#    #+#             */
/*   Updated: 2023/12/13 22:20:30 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("Default"){
	std::cout << GRE << "Default Constructor called for: " << WHI << name << std::endl;
}

Zombie::Zombie(std::string name) : name(name){
	std::cout << GRE << "Constructor called for: " << WHI << name << std::endl;
}

Zombie::~Zombie(){
	std::cout << RED << "Destructor called for : " << WHI << name << std::endl;
}
void Zombie::setName(std::string n){
	this->name = n;
}

void Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
