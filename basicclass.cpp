#include <iostream>

using namespace std;

class Book {
    public: 
        string title;
        string author;
        int pageCount;

        Book(string aTitle, string aAuthor, int aPageCount) {
            title = aTitle;
            author = aAuthor;
            pageCount = aPageCount;
        }

        bool novella() {
            if(pageCount < 150)
                return true;
            return false;
        }
};

int main() {
    
    Book book1("The Sun Also Rises", "Ernest Hemingway", 3000);
    cout << "Book Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Page Count: " << book1.pageCount << endl;
    cout << book1.novella() << endl;


    Book book2("The Old Man and The Sea", "Ernest Hemingway", 120);
    cout << book2.novella() << endl;

    return 0;
}