#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction makeNumber(int a, int b) {
    if (b > 0) {
        Fraction calculator;
        calculator.setFirst(a);
        calculator.setSecond(b);
        calculator.ipart();
        calculator.Display();
        return calculator;
    }
    else {
        cout << "0 is uncaccpatable";
        exit(0);
    }
}

int main() {
    /*1*/
    Fraction calc;
    calc.Read();
    cout << "First num: " << calc.getFirst() << endl;
    cout << "Second num: " << calc.getSecond() << endl;
    calc.ipart();
    calc.Display();
    
    /*2*/
    Fraction calc1;
    int first, second;
    cout << "First = "; cin >> first;
    cout << "Second = "; cin >> second;
    calc1 = makeNumber(first, second);
    return 0;
}