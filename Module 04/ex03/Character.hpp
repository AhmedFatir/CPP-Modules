/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:41:33 by afatir            #+#    #+#             */
/*   Updated: 2023/08/27 14:33:38 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#define RED "\e[0;31m"
#define WHI "\e[0;37m"
#define GRE "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"

#include <iostream>
#include <string>
#include "AMateria.hpp"
class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const &getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter &target) = 0;
};

class Character : public ICharacter {
private:
	std::string name;
	AMateria *inventory[4];

public:
	Character();
	Character(std::string const &name);
	~Character();
	Character(const Character &other);
	Character &operator=(const Character &other);


	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};
#endif