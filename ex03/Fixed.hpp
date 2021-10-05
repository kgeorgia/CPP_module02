/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:26:03 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/05 14:17:10 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					value;
		static const int	fractBits;

	public:
		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed &fixed );
		Fixed( const int raw);
		Fixed( const float raw);

		const Fixed			&operator=( const Fixed &fixed );
		bool				operator>( const Fixed &fixed ) const;
		bool				operator<( const Fixed &fixed ) const;
		bool				operator>=( const Fixed &fixed ) const;
		bool				operator<=( const Fixed &fixed ) const;
		bool				operator==( const Fixed &fixed ) const;
		bool				operator!=( const Fixed &fixed ) const;

		Fixed				operator+( const Fixed &fixed ) const;
		Fixed				operator-( const Fixed &fixed ) const;
		Fixed				operator*( const Fixed &fixed ) const;
		Fixed				operator/( const Fixed &fixed ) const;

		Fixed				&operator++( void );
		Fixed				operator++( int num );
		Fixed				&operator--( void );
		Fixed				operator--( int num );

		static Fixed		&min( Fixed &first,  Fixed &second );
		static Fixed const	&min( const Fixed &first, const Fixed &second );
		static Fixed		&max( Fixed &first,  Fixed &second );
		static Fixed const	&max( const Fixed &first, const Fixed &second );
		int					getRawBits( void ) const;
		void				setRawBits( int const raw );
		float				toFloat( void ) const;
		int					toInt( void ) const; 
};

std::ostream	&operator<<( std::ostream &out, const Fixed &fixed);

#endif