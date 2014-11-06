/*
 * start.cpp
 *
 *  Created on: Sep 20, 2014
 *      Author: hourse
 */
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {

	char automobile[50];
	int year;
	double a_price, d_price;;
	ofstream outFile;
	outFile.open("carinfo.txt");
	cout<<"Enter the make and model of automobile: ";
	cin.getline(automobile,50);
	cout<<"Enter the model year: ";
	cin>>year;
	cout<<"Enter the price: ";
	cin>>a_price;
	d_price=9.13*a_price;


	cout<<fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout<<"the make and model of automobile: "
	<< automobile << endl;
	cout<<"the model year: "
	<<year<<endl;
	cout<<"the price: "
	<< d_price << endl;
	outFile<< fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile<<d_price;
	outFile.close();
	std::cin.get();
	return 0;
}

