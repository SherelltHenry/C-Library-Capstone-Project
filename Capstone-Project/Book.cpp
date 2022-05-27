
#include <iostream> 

#include "Book.h"
#include "User.h"
#include "Author.h"
#include "Person.h"
using namespace std;

string Book::getTitle(){
  return title;
}

string Book::getStatus(){
  return status;
}


Author Book::getAuthor(){
  return author;
}

User Book::getUserCheckedOut(){
  return checkedOutBy;
}

void Book::SetcheckedOut(User bCheckedOut){
checkedOutBy = bCheckedOut;
}

void Book::setAuthor(Author lauthor){
  author = lauthor;
}


void Book :: setStatus(string bStatus){
  status = bStatus;
}
void Book :: setTitle(string bTitle){
  title = bTitle;
}

void Book :: printInfo() {
  cout << "Book Title: " << title << endl;
  cout << "Author: ";
  author.printInfo();
  cout << endl;
  cout << "Book Status: " << status << endl;
    cout <<" " << endl;


  if(status == "Checked Out")
  {
    checkedOutBy.PrintInfo();
  }
}



