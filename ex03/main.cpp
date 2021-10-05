/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:44:11 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/05 16:18:55 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point	a(0.0f, 0.0f);
	Point	b(1.0f, 0.0f);
	Point	c(0.0f, 1.0f);
	Point	point1(0.2f, 0.2f);
	Point	point2(1.0f, 1.0f);
	Point	point3(0.5f, 0.5f);

	std::cout << std::boolalpha;
	std::cout << "Result for point1: " << bsp(a, b, c, point1) << std::endl;
	std::cout << "Result for point2: " << bsp(a, b, c, point2) << std::endl;
	std::cout << "Result for point3: " << bsp(a, b, c, point3) << std::endl;
	std::cout << "Result for A: " << bsp(a, b, c, a) << std::endl;

	return (0);
}