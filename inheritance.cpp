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

class Mercedes : public Automobile {

};

int main() {
    Automobile car1;
    car1.accelerate();

    Mercedes car2;
    car2.brake();

    return 0;
}