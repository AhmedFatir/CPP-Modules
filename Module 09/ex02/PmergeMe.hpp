/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:57:12 by afatir            #+#    #+#             */
/*   Updated: 2024/01/13 08:58:27 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include<iostream>
#include <sstream>
#include<vector>
#include<list>

class PmergeMe
{
private:
	std::vector<int> vec;
	std::list<int> lst;
public:
	PmergeMe();
	PmergeMe(PmergeMe const &src);
	PmergeMe &operator=(PmergeMe const &src);
	~PmergeMe();
	
	void parse(char **av);
	void inside(std::string av);
	void print();
	void JacobshtalNum(int n, std::vector<int> &jacobshtal);

	void sortVector();
	// void sortList();
};

#endif