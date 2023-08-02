/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 08:57:38 by afatir            #+#    #+#             */
/*   Updated: 2023/07/27 09:32:49 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
	int fixed;
	static const int fractional;
public:
	Fixed();
	Fixed(const Fixed &NewFixed);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif