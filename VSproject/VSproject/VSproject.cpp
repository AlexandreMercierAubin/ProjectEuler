// VSproject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "InfiniteNumber.cpp"
#include "MultipleCalculator.cpp"
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void euler1() {
	int t;
	cin >> t;

	vector<int> cases = vector<int>(t);
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		cin >> n;
		cases[a0] = n;
	}

	for (int i = 0; i<cases.size(); ++i)
	{
		long long int sum = quickSumMultiplesOfXYBelowN(3, 5, cases[i]);
		cout << sum << endl;
	}
}

void euler2() {
	int t;
	cin >> t;
	vector<int> cases = vector<int>(t);
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		cin >> n;
		cases[a0] = n;
	}

	for (int i = 0; i<cases.size(); ++i)
	{
		long sum = fibonacciEvenValuedN(cases[i]);
		cout << sum << endl;
	}
}

void euler6() {
	int t;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		cin >> n;
		cout << sumSquareDifference(n) << endl;
	}
}

void euler13() {
	cout << "input n:" << endl;

	int n = 0;
	cin >> n;

	string input;
	cin >> input;
	input.erase(remove_if(input.begin(), input.end(), isspace), input.end());
	InfiniteNumber sum = InfiniteNumber(input);

	for (int i = 1; i < n; ++i) {
		string input;
		cin >> input;
		input.erase(remove_if(input.begin(), input.end(), isspace), input.end());

		InfiniteNumber inputNumber = InfiniteNumber(input);
		sum = sum + inputNumber;
	}

	vector<short int> res = sum.toVector();
	for (int i = 0; i < 10; ++i) {
		cout << res[res.size() - 1 - i];
	}
}

int main() {
	euler1();

	char stop;
	cin >> stop;
}

