#pragma once


class Fraction {

private:
	int first, second;
	int result = 0;

public:
	int ipart();
	int getFirst() const { return first; };
	int getSecond() const { return second; };
	int setFirst(int value);
	int setSecond(int value);
	void Read();
	void Display();
};