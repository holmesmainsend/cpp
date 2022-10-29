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
    public:
        void activateLuxuryMode() {
            cout << "Luxury mode activating..." << endl;
        }
        void brake() {
            cout << "Reducing speed now..." << endl;
        }
};

int main() {
    Automobile car1;
    car1.accelerate();
    car1.brake();

    Mercedes car2;
    car2.activateLuxuryMode();
    car2.brake();

    return 0;
}