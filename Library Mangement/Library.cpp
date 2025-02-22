#include "Library.h"

void Library::addBook(string title, string author, string ISBN, int copies){
  if(bookCount < 100){
    bool isFound = false;
    int index = 0;
    for(int i=0;i<bookCount;i++){
      if(books[i].getISBN() == ISBN){
        isFound = true;
        index = i;
        break;
      }
    }
    if(isFound){
        books[index].incrementCopies(copies);
        cout << "Book Successfully Added.\n";
    }else {
      books[bookCount] = Book(title,author,ISBN,copies);
      bookCount++;   
      cout << "Book Successfully Added.\n";
    }
      
    
  }else {
    cout << "Library is full! Cannot add more books.\n";
  }
}
void Library::borrowBook(string ISBN,int copies){
  bool isFound = false;
  int index = 0;
  if(copies>2){
    cout << "You can only borrow less than 3 Books!\n";
  }else {
    for(int i=0;i<bookCount;i++){
      if(books[i].getISBN() == ISBN){
         isFound = true;
         index = i;
      }
    }
    if(isFound){
      if(books[index].getCopies() < copies){
        books[index].getCopies() ? cout << "Only " << books[index].getCopies() << " are available!\n" : cout << "This book is not Available\n";
        
     }else {
        cout << books[index].getCopies() << " Book borrowed!\n";      
        books[index].decrementCopies(copies);
     }
    }else{
      cout << "Book not Found.\n";
    }
  }
  
    

}
void Library::returnBook(string ISBN){
  bool isFound = true;
  int index = 0;
  for(int i=0;i<bookCount;i++){
    if(books[i].getISBN() == ISBN){
      isFound = true;
      index = i;
      break;
    }
  }
  if(isFound){
    books[index].incrementCopies(1);
    cout << "Book has been returned successfully.\n";
  }else{
    cout << "Book not found.\n";
  }
}
void Library::displayBooks(){
  if(bookCount==0){
    cout << "Sorry, NO Books Found.\n";
    return;
  }
  cout << "All the Books from the Library\n";
  cout << "*******************************\n";
  for(int i=0;i<bookCount;i++){
    cout << "Title: "<< books[i].getTitle() << endl;
    cout << "Author: "<< books[i].getAuthor() << endl;
    cout << "Available Copies:"<< books[i].getCopies() << endl;
    cout << "ISBN: "<< books[i].getISBN() << endl << endl;
  }
  cout << "*******************************\n";
}
void Library::displayBook(string ISBN){
  bool isFound = false;
  int index = 0;
  for(int i=0;i<bookCount;i++){
    if(books[i].getISBN() == ISBN){
      isFound = true;
      index = i;
    }
  }
  if(isFound){
    cout << "Title: "<< books[index].getTitle() << endl;
    cout << "Author: "<< books[index].getAuthor() << endl;
    cout << "Available Copies:"<< books[index].getCopies() << endl;
    cout << "ISBN: "<< books[index].getISBN() << endl << endl;
  }else {
    cout << "Book not Found\n";
  }
}