#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;
    cout << "Enter operator: " << endl;
    cin >> op;
    
    if (op == '+')
        cout << num1 + num2 << endl;
    else if (op == '-')
        cout << num1 - num2 << endl;
    else if (op == '/')
        cout << num1 / num2 << endl;
    else if (op == '*')
        cout << num1 * num2 << endl;
    else
        cout << "Invalid operator" << endl;

    return 0;
}