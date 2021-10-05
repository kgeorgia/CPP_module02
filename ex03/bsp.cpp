/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:19:37 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/05 16:19:16 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	coordPointRelToLine( Point a, Point b, Point d )
{
	return ( (d.getXValue() - a.getXValue()) * (b.getYValue() - a.getYValue()) -
	(d.getYValue() - a.getYValue()) * (b.getXValue() - a.getXValue()) );
}

bool	checkTwoPoints( Point a, Point b, Point c, Point d)
{
	Fixed	zero;

	return ( coordPointRelToLine(a, b, c) * coordPointRelToLine(a, b, d) > 0 );
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	return ( checkTwoPoints( a, b, c, point ) && checkTwoPoints( b, c, a, point ) && checkTwoPoints(c, a, b, point) );
}