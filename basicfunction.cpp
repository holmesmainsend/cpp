#include <iostream>

using namespace std;

double cubing(double value) {
    return (value * value * value);
}

int main() {
    double num1 = 4.5;
    cout << cubing(4.5) << endl;

    return 0;
}

