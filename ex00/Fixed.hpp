/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:26:03 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/04 18:45:22 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	fractBits;

	public:
		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed &fixed );
		const Fixed &operator=( const Fixed &fixed );
		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
};

#endif