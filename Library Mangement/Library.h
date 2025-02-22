#ifndef LIBRARY_H
#define LIBRARY_H
#include "Book.h"
#include <iostream>
using namespace std;

class Library {
  private:
      static const int MAX_BOOKS = 100; // Maximum number of books
      Book books[MAX_BOOKS]; // Array of books
      int bookCount; // Number of books currently in the library
  public:
      Library() : bookCount(0) {} // Constructor initializes bookCount to 0
  
      void addBook(string title, string author, string ISBN, int copies); 
      void borrowBook(string ISBN,int copies);  
      void returnBook(string ISBN);  
      void displayBooks();
      void displayBook(string ISBN); 
  };

#endif