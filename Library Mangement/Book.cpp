#include "Book.h"

Book::Book(string t, string a, string i, int c): title(t), author(a), ISBN(i), availableCopies(c) {}  
string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
string Book::getISBN() const { return ISBN; }
int Book::getCopies() const { return availableCopies; }
void Book::setCopies(int c) { availableCopies = c; }
void Book::incrementCopies(int c) { availableCopies+=c; }
void Book::decrementCopies(int c) { availableCopies-=c; }