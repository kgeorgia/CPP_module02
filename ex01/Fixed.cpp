/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:26:06 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/04 19:28:00 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractBits = 8;

Fixed::Fixed( void ): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &fixed )
{
	value = fixed.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed( const int raw)
{
	value = raw << fractBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float raw)
{
	value = roundf(raw * (1 << fractBits));
}

const Fixed  &Fixed::operator=( const Fixed &fixed)
{
	value = fixed.getRawBits();
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ( (float)value / (float)(1 << fractBits) );
}

int		Fixed::toInt( void ) const
{
	return (value >> fractBits);
}

std::ostream &operator<<( std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}