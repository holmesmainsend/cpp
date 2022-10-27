#include <iostream>

using namespace std;

double powering(double value, double exponent);

int main() {
    double num1 = 2;
    double expo = 3;
    cout << powering(num1, expo) << endl;

    return 0;
}

double powering(double value, double exponent) {
    return (value * value * value);
}