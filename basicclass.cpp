#include <iostream>

using namespace std;

class Book {
    public: 
        string title;
        string author;
        int pageCount;
};

int main() {
    
    Book book1;
    book1.title = "The Sun Also Rises";
    book1.author = "Ernest Hemingway";
    book1.pageCount = 3000;

    return 0;
}