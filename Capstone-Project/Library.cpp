
#include <iostream>
#include <string>
#include <vector>
#include "Library.h"
#include "Book.h"
#include "Author.h"
#include "User.h"
#include "Person.h"

using namespace std;

void Library::AddBook()
{
  string bookTitle;
  string authorFirstName;
  string authorLastName;
  Author author;
  string defaultStat = "Available"; 
  User defaultUser;
  int count;

  cout << "How many books would you like to add into the library?" << endl;
  cin >> count;
  cin.get(); // to skip the new line character
  cout << endl;

  for(int i = 0; i < count; i++)
  {
    cout << "Add A Book" << endl;
    cout << endl;
    cout << "Please enter the title of your book: ";
    getline(cin, bookTitle);
    cout << "Please enter the authors first name: ";
    getline(cin, authorFirstName);
    cout << "Please enter the authors last name: ";
    getline(cin, authorLastName);
    cout << endl;


    Author a(authorFirstName, authorLastName);
    Book newBook(bookTitle, a, defaultStat, defaultUser); 
    bookList.push_back(newBook);
  }
}


void Library::CheckoutBook()
{
  // 1. search the booklist of the library to find the title 
  // 2.  get the user information (first name, last name id) , create a new user
  // 3. update the checkedOutBy user of the book 



  string bookTitle;
  string userFirstName;
  string userLastName;
  User user;
  int num;

  cout << "Checkout A Book From Library" << endl;
  cout << endl;
  cout << endl;
  cout << "Please enter the name of the book you would like to checkout from the KSS Library: ";
  getline(cin, bookTitle);

  for(int i = 0; i < bookList.size(); i++)
  {
    if(bookTitle != bookList[i].getTitle())
    {
      cout << endl;
      cout << "That book does not exist in this library." << endl;
      cout << "Please double check spelling, or try again later." << endl;
    }
    if(bookTitle == bookList[i].getTitle()) 
    {
      if(bookList[i].getStatus() == "Checked out")
      {
        cout << endl;
        cout << "We're sorry, but the book you are looking for is not avialable for checkout." << endl;
        break;
      }
      
      cout << "Please enter the required information below." << endl;
      cout << endl;
      cout << "User First Name: ";
      getline(cin, userFirstName);
      cout << "User Last Name: ";
      getline(cin, userLastName);
      cout << "User Id: ";
      cin >> num;
      
    
      User a(userFirstName, userLastName, num);

      if(bookList[i].getStatus() == "Available") 
      {

        bookList[i].setStatus("Checked out");
        bookList[i].SetcheckedOut(a);
        cout << "You have successfuly checked out the book " << bookTitle << "." << endl;
      }
    }
  }
}


void Library::PrintAllBooks()
{
  cout << "Display All Books" << endl;
  cout << endl;
   if(bookList.size() == 0)
  {
    cout << "There are currently no books in the Library." << endl;
  }
  cout << "All books are listed below." << endl;
  cout << endl;

  for(int i = 0; i < bookList.size(); i++)
  {
    bookList.at(i).printInfo();
  }
}
//if no books say no books
Library::Library()
{
  
}