#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction makeNumber(int a, int b) {
    if (b > 0) {
        Fraction calc;
        calc.setFirst(a);
        calc.setSecond(b);
        calc.Display();
        calc.ipart();
        return calc;
    }
    else {
        cout << "0 is uncaccpatable";
        exit(1);
    }
}

int main() {
    Fraction calc;
    int frst, sec;
    calc.Read();
    cout << "First num: " << calc.getFirst() << endl;
    cout << "Second num: " << calc.getSecond() << endl;
    calc.Display();
}