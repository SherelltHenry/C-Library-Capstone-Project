#ifndef BOOKH
#define BOOKH
#include <iostream>
#include <string>
using namespace std;
// #include "Author.h"
#include "User.h"
#include "Author.h"


class Book{
private:
string title;
string status; //Avaliable Checked Out
Author author;
User checkedOutBy;

public:
Book(string bookName, Author bookAuthor, string bookStatus, User checkedOut){
  title = bookName;
  status = bookStatus;
  author = bookAuthor;
  checkedOutBy = checkedOut;
}

string getTitle();
string getStatus();
Author getAuthor();
User getUserCheckedOut();

void SetcheckedOut(User bCheckedOut);
void setAuthor(Author bAuthor);
void setStatus(string bStatus);
void setTitle(string bTitle);
void printInfo();

};
#endif