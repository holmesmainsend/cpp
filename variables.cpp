#include <iostream>

using namespace std;

int main() {
    string characterName = "Roy";
    int characterAge = 8;

    cout << "This is the story of a boy named " << characterName << endl;
    cout << "A toy was owned by " << characterName << endl;
    cout << "This toy brought " << characterName << " joy" << endl;
    cout << characterName << "'s joy and his toy, boy!\n";
    cout << "At this time he was age " << characterAge << endl;

    string phrase = "Remember the Alamo";
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    cout << phrase.find("Alamo", 0) << endl;
    cout << phrase.substr(9, 3) << endl;

    return 0;
}