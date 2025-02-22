#include <iostream>
using namespace std;
#include "Library.h"

int main(){
  Library l1;
  l1.addBook("Rich Dad Poor Dad","Robert Kiyosaki","0000",3);
  l1.addBook("Atomic Habits","James Clear","0001",2);
  l1.addBook("Can't Hurt Me","David Goggins","0002",5);
  int choice;
    do {
        cout << "**********************\n";
        cout << "Library Management System\n";
        cout << "1. Borrow Book\n";
        cout << "2. View Book\n";
        cout << "3. View Books\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1: 
            {
                string isbn;
                int n;
                cout << "Enter the ISBN of the Book\n";
                cin >> isbn;
                cout << "Enter the number of copies do you want!(1 or 2)\n";
                cin >> n;
                l1.borrowBook(isbn,n);
                break;
            }
            case 2:
                {
                  string isbn;
                  cout << "Enter the ISBN of the Book\n";
                  cin >> isbn;
                  l1.displayBook(isbn);
                  break;
                }
            case 3:
                {
                  l1.displayBooks();
                  break;
                }
            case 4:
                {
                  string isbn;
                  cout << "Enter the ISBN of the Book you return\n";
                  cin >> isbn;
                  l1.returnBook(isbn);
                  break;
                }  
            case 5: 
              break;     
            default:
                cout << "Invalid choice! Please choose again.\n";
        }
    } while (choice != 5); // Loop until the user chooses to exit

  return 0;
}