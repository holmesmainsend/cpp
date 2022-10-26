#include <iostream>

using namespace std;

void sayHello(string name) {
    cout << "Hello " << name << endl;
}

int main() {
    string name = "Jeff";
    sayHello(name);

    return 0;
}