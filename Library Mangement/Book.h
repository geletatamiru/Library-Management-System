#ifndef BOOK_H
#define BOOK_H

#include <iostream>
using namespace std;
class Book {
  private:
      string title;
      string author;
      string ISBN;
      int availableCopies;
  
  public:
      Book(string t = "", string a = "", string i = "", int c = 0); 
      string getTitle() const;
      string getAuthor() const;
      string getISBN() const;
      int getCopies() const;
      void setCopies(int c);
      void incrementCopies(int c);
      void decrementCopies(int c);
  };
#endif 
