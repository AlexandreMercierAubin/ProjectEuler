#include "stdafx.h"
#include <vector>
using namespace std;

static long sumMultipleOfKBelowN(long k, long n) {
		long sum = 0;
		long x = k;
		while (x < n) {
			sum += x;
			x += k;
		}
		return sum;
}

static long quickSumMultiplesOfXYBelowN(long x, long y, long n) {
	long z = x * y;
	long a = 0, b = 0, d = 0;
	a = (n - 1) % x;
	a = n - 1 - a;
	a = a / x;
	b = (n - 1) % y;
	b = n - 1 - b;
	b = b / y;
	d = (n - 1) % z;
	d = n - 1 - d;
	d = d / z;
	return x * a*(a + 1) / 2 + y * b*(b + 1) / 2 - z * d*(d + 1) / 2;
}

static long long unsigned int fibonacciEvenValuedN(long long unsigned int n) {
	long long unsigned int p1 = 0;
	long long unsigned int p2 = 2;

	long long unsigned int sum = 0;

	while (p2 <= n) {
		long long unsigned int p3 = 4 * p2 + p1;
		sum += p2;
		p1 = p2;
		p2 = p3;
	}
	return sum;
}