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
            setYear(aYear);
        }
        void setYear(int aYear) {
            if(aYear > 1199 && aYear < 1600)
                year = aYear;
            else 
                year = 0;
        }
        int getYear() {
            return year;
        }
};

int main() {
    Artwork painting1("The Mona Lisa", "Leonardo da Vinci", 1303);
    cout << painting1.getYear() << endl;

    painting1.setYear(1503);
    cout << painting1.getYear() << endl;

    painting1.setYear(1980);
    cout << painting1.getYear() << endl;

    return 0;
}