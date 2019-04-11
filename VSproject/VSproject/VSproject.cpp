// VSproject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "InfiniteNumber.cpp"
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	
	cout <<"input n:"<<endl;

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

	cin >> input;
	return 0;
}

