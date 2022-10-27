#include <iostream>

using namespace std;

int powering(int initialValue, int exponent);

int main() {
    int num1 = 2;
    int expo = 4;
    cout << powering(num1, expo) << endl;

    return 0;
}

int powering(int initialValue, int exponent) {
    int result = 1;

    for(int i = 0; i < exponent; i++)
        result *= initialValue;

    return result;
}