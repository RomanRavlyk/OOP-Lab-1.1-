#include "Fraction.h"
#include <iostream>

using namespace std;

int Fraction::setFirst(int value) {
	first = value;
	return first;
};

int Fraction::setSecond(int value) {
	second = value;
	return second;
};

int Fraction::ipart() {
	if (second == 0) {
		cout << "Dividing on zero are unacceptable"; exit(0);
	}

	result = first / second;
	return result;
}

void Fraction::Display() {
	cout << "Your int result: " << result << endl;
}

void Fraction::Read()
{
	cout << "Input first num: " ; cin >> first;
	cout << "Input second num: "; cin >> second;
	setFirst(first);
	setSecond(second);
}