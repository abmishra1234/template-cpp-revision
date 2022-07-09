using namespace std;
#include <iostream>
#include "template.h"

//#define FORREF
#ifndef FORREF
/*
	Function Templates
	- template type parameter
	template <typename T>
	void xchg(T &x, T &y) {
		// just define as per need
	}

	- template type multiple parameters
	template <typename T, typename T1>
	void add(T &x, T1 &y) {
		// just define as per need

	}

	- non type template parameters 
	template <int N>
	int nTimes(int n) {
		// define logic here
		return 0;
	}
	
*/
/*
Overloading:



*/

int main() {
	
	int a = 5, b = 7;
	cout << "a = " << a << ", b = " << b << endl;
	xchg(a, b);
	cout << "a = " << a << ", b = " << b << endl;

	//########################

	int n = 5;
	cout << "output = " << nTimes<10>(5) << endl;

	//########################



	return 0;
}

#endif // !FORREF

