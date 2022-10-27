#include <iostream>

using namespace std;

int main() {
    int secretNum = 9;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while (guess != secretNum && outOfGuesses == false) {
        if (guessCount < guessLimit) {
            cout << "Enter your integer guess: " << endl;
            cin >> guess;
            guessCount++;
        } else
            outOfGuesses = true;
    }

    if (outOfGuesses == true)
        cout << "You lost" << endl;
    else
        cout << "You won" << endl;

    return 0;
}