#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Author.h"
#include "Book.h"
#include "Library.h"
#include "Person.h"
#include "User.h"
using namespace std;

const int AddABook = 1;
const int CheckoutBook = 2;
const int EXIT = 3;

//menu


void displayMenu()
{
    cout << endl;
    cout << "***Menu***" << endl;
    cout << " (1) Add A Book" << endl;
    cout << " (2) Display All Books" << endl;
    cout << " (3) Checkout A Book" << endl;
    cout << " (0) Exit Library" << endl;
}
//end of menu



int main() {
ofstream kssFile;
kssFile.open("KSS.txt");


if (!kssFile.is_open()) {
  cout << "We're sorry but you are unable to access the library at this moment. Please try again later." << endl;
  return 1;
}

if(kssFile.is_open())
{
cout << endl;
cout << "Welcome To The KSS Library" << endl;
cout << endl;
Library kss; 


while(true)
{
  int choice;
  displayMenu();
  cout << endl;
  cout << "Enter your choice 0-3: ";
  cin >> choice;
  cin.ignore();
  cout << endl;

  switch(choice)
  {
    case 0: cout << "Library Exited" << endl;
            exit(0);
            break;
    case 1: kss.AddBook();
            kss.PrintAllBooks();
            break;
    case 2: kss.PrintAllBooks();
            break;
    case 3: kss.CheckoutBook();
            break;
    default: cout << "Invalid choice. Please try again." << endl;
  }
  cout << endl;
  cout << "YOU MAY PRESS ANY KEY TO CONTINUE" << endl;
  cin.ignore();
}



kssFile.close();
}

return 0;
}