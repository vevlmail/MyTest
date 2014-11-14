/*
 * start.cpp
 *
 *  Created on: Sep 20, 2014
 *      Author: hourse
 */
#include <iostream>
#include "class.h"

int main(int argc, char **argv) {
	hello a,b;
	b = 3 * a;
	a.show();
	b.show();
	std::cin.get();
	return 0;
}

