/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:19:47 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/05 15:19:51 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) {}

Point::~Point() {}

Point::Point( const Point &point): x(point.x), y(point.y) {}

Point::Point( const float f_x, const float f_y): x(f_x), y(f_y) {}

Point		&Point::operator=( const Point &point )
{
	(void)point;
	return (*this);
}

Fixed	Point::getXValue( void ) const
{
	return (this->x);
}

Fixed	Point::getYValue( void ) const
{
	return (this->y);
}