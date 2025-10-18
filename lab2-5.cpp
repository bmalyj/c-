#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    int year;
    double price;
};

void printBooks(Book* books, int size) {
    cout << "list of books: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "book: " << i << endl;
        cout << "  name " << books[i].title << endl;
        cout << "  author " << books[i].author << endl;
        cout << "  year " << books[i].year << endl;
        cout << "  price " << books[i].price << endl;
    }
}

void maxPrice(Book* books, int size) {
    if (size == 0) {
        cout << "zero" << endl;
        return;  
    }
    double maxPrice = books[0].price;
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (books[i].price > maxPrice) {
            maxPrice = books[i].price;
            maxIndex = i;
        }
    }
    cout << "most expensive:" << books[maxIndex].title << endl;
}

int main() {
    int bookCount;
    cout << "paste bookcount" << endl;
    cin >> bookCount;
    cin.ignore();
    Book library[1000];

    for (int i = 0; i < bookCount; i++) {
        cout << "book " << i << endl;

        cout << "name ";
        getline(cin, library[i].title);

        cout << "author ";
        getline(cin, library[i].author);

        cout << "year of the book ";
        cin >> library[i].year;

        cout << "price: ";
        cin >> library[i].price;
        cin.ignore();
    }

    printBooks(library, bookCount);
    maxPrice(library, bookCount);        
 
}
