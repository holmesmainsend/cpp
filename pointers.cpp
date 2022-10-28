#include <iostream>

using namespace std;

int main() {
    int num = 237;
    int *pNum = &num;
    double rating = 4.11;
    double *pRating = &rating;
    string noun = "Book";
    string *pNoun = &noun;

    cout << &num << endl;
    cout << *pNum << endl;
    cout << &rating << endl;
    cout << *pRating << endl;
    cout << &noun << endl;
    cout << *pNoun << endl;
    
    return 0;
}