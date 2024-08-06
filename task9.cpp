#include <iostream>
using namespace std;

int findMax(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    else if (b >= a && b >= c) return b;
    else return c;
}

int main() {
    int maxVal = findMax(10, 20, 15);
    cout << "The maximum value is " << maxVal << endl;
    return 0;
}