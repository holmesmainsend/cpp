#include <iostream>

using namespace std;

double cubing(double value);

int main() {
    double num1 = 4.5;
    cout << cubing(num1) << endl;

    return 0;
}

double cubing(double value) {
    return (value * value * value);
}
