#include <iostream>

using namespace std;

class Automobile {
    public:
        void accelerate() {
            cout << "vrrrrOOOOOOMMMM" << endl;
        }
        void brake() {
            cout << "ERRRRRRRRRTTTT" << endl;
        }
};

int main() {
    Automobile car1;
    car1.accelerate();

    return 0;
}