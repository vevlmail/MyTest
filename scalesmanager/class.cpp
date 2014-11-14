/*
 * class.cpp
 *
 *  Created on: Nov 14, 2014
 *      Author: hourse
 */
#include "class.h"


void hello::show(void) const
{
	std::cout << dira << std::endl;
	std::cout << Hi << std::endl;
	std::cout << (int)Family::Mother << std::endl;
	std::cout << sa << std::endl;
}

hello operator*(int f, const hello &t)
{
	hello d;
	d.sa = t.sa * f;
	return d;
}

