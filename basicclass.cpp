#include <iostream>

using namespace std;

class Book {
    public: 
        string title;
        string author;
        int pageCount;
        Book(string series) {
            cout << "Creating new book..." << endl;
            cout << "Book series: " << series << endl;
        }
};

int main() {
    
    Book book1("American Classics");
    book1.title = "The Sun Also Rises";
    book1.author = "Ernest Hemingway";
    book1.pageCount = 3000;

    return 0;
}