#include <iostream>

using namespace std;

int main() {
    int secretNum = 9;
    int guess;

    while (guess != secretNum) {
        cout << "Enter your integer guess: " << endl;
        cin >> guess;
    }

    cout << "You win!" << endl;

    return 0;
}