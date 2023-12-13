/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 09:43:37 by afatir            #+#    #+#             */
/*   Updated: 2023/12/10 09:43:55 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
#define A_HPP

#include "Base.hpp"

class A : public Base
{
private:
    /* data */
public:
    A(/* args */);
    A(A const &cpy);
    ~A();
    A &operator=(A const &cpy);
};

#endif