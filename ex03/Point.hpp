/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:59:29 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/05 15:21:07 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;

	public:
		Point();
		~Point();
		Point(const Point &point);
		Point( const float f_x, const float f_y);

		Point	&operator=( const Point &point);

		Fixed	getXValue( void ) const;
		Fixed	getYValue( void ) const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif