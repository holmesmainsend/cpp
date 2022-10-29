#include <iostream>

using namespace std;

class Artwork {
    private:
        int year;
    public:
        string title;
        string artist;
        Artwork(string aTitle, string aArtist, int aYear) {
            title = aTitle;
            artist = aArtist;
            year = aYear;
        }
};

int main() {
    Artwork painting1("The Mona Lisa", "Leonardo da Vinci", 1503);
    cout << painting1.year << endl;

    return 0;
}