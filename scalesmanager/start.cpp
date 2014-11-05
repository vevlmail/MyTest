/*
 * start.cpp
 *
 *  Created on: Sep 20, 2014
 *      Author: hourse
 */
#include <iostream>
#include <vector>

int main(int argc, char **argv) {
	std::vector<int> s(4);
	for (int &i : s) {
		i = 1;
	}
	for (int i : s) {
		std::cout << i << std::endl;
	}
	int a[5] = {1,2,3,4,5};
	for(int i=0; i<5; ++i)
	{
		std::cout << a[i] <<std::endl;
	}
	std::cout<<"###########################"<< std::endl;
	int j=5;
	while(++j<9)
		std::cout << j++ << std::endl;
	int y = (1,8);
	y=1,8;
	std::cout<< y << std::endl;
	std::cin.get();
	return 0;
}

