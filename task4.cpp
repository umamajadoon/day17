#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    cout << "Multiplication of integers: " << multiply(3, 5) << endl;
    cout << "Multiplication of doubles: " << multiply(3.5, 2.5) << endl;
    return 0;
}