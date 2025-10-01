// Solution using union of structures to save memory for shirts/books

#include <iostream>
#include <cstring>
using namespace std;

// Structure for shirt details
struct Shirt {
    char size[10];
    char color[10];
    char brand[20];
};

// Structure for book details
struct Book {
    char genre[20];
    char design[20];
    int isbn;
};

// Store structure with price and union of Shirt/Book
struct Store {
    int price; // 4 bytes
    union {
        Shirt shirt;
        Book book;
    } item;
};

int main() {
    Store s;
    s.price = 2500;
    strcpy(s.item.shirt.size, "L");
    strcpy(s.item.shirt.color, "Black");
    strcpy(s.item.shirt.brand, "Polo");

    cout << "Size of Store structure: " << sizeof(s) << " bytes" << endl;
    cout << "Shirt size: " << s.item.shirt.size << endl;
    cout << "Shirt color: " << s.item.shirt.color << endl;
    cout << "Shirt brand: " << s.item.shirt.brand << endl;

    return 0;
}

