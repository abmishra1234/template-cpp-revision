#pragma once

template<typename T>
void xchg(T& x, T& y) {
	T temp = x;
	x = y;
	y = temp;
}

template <int N>
int nTimes(int n) {
	return N * n;
}


