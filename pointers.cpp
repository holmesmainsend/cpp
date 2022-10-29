#include <iostream>

using namespace std;

int main() {
    int num = 237;
    int *pNum = &num;
    double rating = 4.11;
    double *pRating = &rating;
    string noun = "Book";
    string *pNoun = &noun;

    cout << endl;
    cout << &num << endl;
    cout << *pNum << endl;
    cout << pNum << endl;
    cout << endl;
    cout << &rating << endl;
    cout << *pRating << endl;
    cout << pRating << endl;
    cout << endl;
    cout << &noun << endl;
    cout << *pNoun << endl;
    cout << pNoun << endl;
    cout << endl;

    int test = 45;
    int *pTest;
    pTest = &test;

    cout << endl;
    cout << &test << endl;
    cout << *pTest << endl;
    cout << pTest << endl;
    cout << endl;

    int test2 = 55;
    int *pTest2 = &test2;

    cout << endl;
    cout << &test2 << endl;
    cout << *pTest2 << endl;
    cout << pTest2 << endl;
    cout << endl;
    
    int test3 = 65;
    int test33;
    int *pTest3;
    pTest3 = &test3;
    test33 = *pTest3;

    cout << endl;
    cout << &test3 << endl;
    cout << *pTest3 << endl;
    cout << pTest3 << endl;
    cout << test33 << endl;
    cout << endl;

    int test4 = 75;
    int *pTest4;
    int **ppTest4;
    pTest4 = &test4;
    ppTest4 = &pTest4;

    cout << endl;
    cout << &test4 << endl;
    cout << *pTest4 << endl;
    cout << pTest4 << endl;
    cout << **ppTest4 << endl;
    cout << *ppTest4 << endl;
    cout << ppTest4 << endl;
    cout << endl;

    return 0;
}