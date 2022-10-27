#include <iostream>

using namespace std;

// First comment

/*
    Testing for
    a
    second
    comment
*/

int main() {

    int numberGrid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++)
            cout << numberGrid[i][j] << endl;
    }

    //return 0;
    return 0;
}