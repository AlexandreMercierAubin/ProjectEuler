#include "stdafx.h"
#include <vector>
using namespace std;

class InfiniteNumber {
	vector<short int> number;
public:
	InfiniteNumber() {

	}

	InfiniteNumber(const string &strNum) {
		number = vector<short int>(strNum.size());
		for (int i = 0; i < number.size(); ++i) {
			number[i] = strNum[number.size() - 1 - i] - '0';
		}
	}
	InfiniteNumber(vector<short int> initNumber) { number = initNumber; }

	vector<short int> toVector() { return number; }

	static vector<short int> addNumbers(const vector<short int> &longer,
		const vector<short int> &shorter) {
		vector<short int> result;

		short int rest = 0;
		for (int i = 0; i < longer.size(); ++i) {
			short int value;

			if (i < shorter.size()) {
				value = rest + shorter[i] + longer[i];
			}
			else {
				value = rest + longer[i];
			}

			if (value >= 10) {
				value = value - 10;
				rest = 1;
			}
			else {
				rest = 0;
			}

			result.push_back(value);
		}

		if (rest > 0) {
			result.push_back(rest);
		}
		return result;
	}

	InfiniteNumber operator+(InfiniteNumber &addedNum) {
		InfiniteNumber result;
		vector<short int> resultVector;
		vector<short int> addedVec = addedNum.toVector();

		if (number.size() > addedVec.size()) {
			resultVector = addNumbers(number, addedVec);
		}
		else {
			resultVector = addNumbers(addedVec, number);
		}

		result = InfiniteNumber(resultVector);
		return result;
	}
};