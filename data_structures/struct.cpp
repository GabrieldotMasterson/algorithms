// struct 
// What is a struct?
// --> A struct is a user-defined data type in C/C++
//     that allows you to group variables of different types under a single name.
//     It is used to represent a record or an object with multiple related properties.

//exemples of struct

#include <iostream>
#include <cstring> 

using namespace std;

struct Book {
    char title[50]; 
    char author[50]; 
    int pages;
    int year; 
};

// why create structs by a function?
// --> To encapsulate the creation of a struct and make it easier to create instances of that struct with specific values.
//     and can help to reduce code duplication and improve readability.
Book createBook(const char title[], const char author[], int year, int pages) {
    Book b;
    strcpy(b.title, title);
    strcpy(b.author, author);
    b.year = year;
    b.pages = pages;
    return b;
}

int main(){
    Book book1 = createBook("The Great Gatsby", "F. Scott Fitzgerald", 1925, 180);
    Book book2 = createBook("1984", "George Orwell", 1949, 328);

    cout << "Book 1: " << book1.title << ", Author: " << book1.author << ", Year: " << book1.year << ", Pages: " << book1.pages << endl;
    cout << "Book 2: " << book2.title << ", Author: " << book2.author << ", Year: " << book2.year << ", Pages: " << book2.pages << endl;

    return 0;
}




