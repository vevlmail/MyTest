/*
 * class.h
 *
 *  Created on: Nov 14, 2014
 *      Author: hourse
 */

#ifndef CLASS_H_
#define CLASS_H_
#include <iostream>

class hello {
	static const int dira { 12 };
	enum {
		Hi
	};
	enum class Family {
		I, Mother, Brother
	};
	int sa;
public:
	hello() {
		sa = 3;
	}
	void show(void) const;
	friend hello operator*(int f, const hello &t);

};

#endif /* CLASS_H_ */
