/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:26:06 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/05 14:49:21 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractBits = 8;

Fixed::Fixed( void ): value(0) {}

Fixed::~Fixed( void ) {}

Fixed::Fixed( const Fixed &fixed )
{
	value = fixed.getRawBits();
}

Fixed::Fixed( const int raw)
{
	value = raw << fractBits;
}

Fixed::Fixed( const float raw)
{
	value = roundf(raw * (1 << fractBits));
}

const Fixed  &Fixed::operator=( const Fixed &fixed)
{
	value = fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	return (value);
}

void Fixed::setRawBits( int const raw )
{
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

bool	Fixed::operator>( const Fixed &fixed) const
{
	return (value > fixed.getRawBits());
}

bool	Fixed::operator<( const Fixed &fixed) const
{
	return (value < fixed.getRawBits());
}

bool	Fixed::operator>=( const Fixed &fixed) const
{
	return (value >= fixed.getRawBits());
}

bool	Fixed::operator<=( const Fixed &fixed) const
{
	return (value <= fixed.getRawBits());
}

bool	Fixed::operator==( const Fixed &fixed) const
{
	return (value == fixed.getRawBits());
}

bool	Fixed::operator!=( const Fixed &fixed) const
{
	return (value != fixed.getRawBits());
}

Fixed		Fixed::operator+( const Fixed &fixed ) const
{
	Fixed ret;

	ret.setRawBits(value + fixed.getRawBits());
	return (ret);
}

Fixed		Fixed::operator-( const Fixed &fixed ) const
{
	Fixed ret;

	ret.setRawBits(value - fixed.getRawBits());
	return (ret);
}

Fixed		Fixed::operator*( const Fixed &fixed ) const
{
	Fixed ret;

	ret.setRawBits(value * fixed.getRawBits() / (1 << fractBits));
	return (ret);
}

Fixed		Fixed::operator/( const Fixed &fixed ) const
{
	Fixed ret;

	ret.setRawBits(value * (1 << fractBits) / fixed.getRawBits());
	return (ret);
}

Fixed		&Fixed::operator++( void )
{
	value++;
	return (*this);
}

Fixed		Fixed::operator++( int num )
{
	Fixed	temp(*this);

	(void)num;
	++(*this);
	return (temp);
}

Fixed		&Fixed::operator--( void )
{
	value--;
	return (*this);
}

Fixed		Fixed::operator--( int num )
{
	Fixed	temp(*this);

	(void)num;
	--(*this);
	return (temp);
}

Fixed		&Fixed::min( Fixed &first,  Fixed &second )
{
	return( first < second ? first : second);
}

Fixed const		&Fixed::min( const Fixed &first,  const Fixed &second )
{
	return( first < second ? first : second);
}

Fixed		&Fixed::max( Fixed &first,  Fixed &second )
{
	return( first > second ? first : second);
}

Fixed const		&Fixed::max( const Fixed &first,  const Fixed &second )
{
	return( first > second ? first : second);
}