/*
 * start.cpp
 *
 *  Created on: Sep 20, 2014
 *      Author: hourse
 */
#include <iostream>
const double f1 (const double, int);

using namespace std;

int main(int argc, char **argv) {

	const double (*p)(const double, int) = &f1;
	auto p1 = &p;
	cout<<&p1<<endl;
	cout <<(*p1)(3.0, 1)<<endl;
	std::cin.get();
	return 0;
}

const double f1( const double ar, int n)
{
	return ar;
}
