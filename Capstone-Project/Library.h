//library object
#ifndef LIBRARYH
#define LIBRARYH

#include <vector>
#include "Book.h"
using namespace std;

class Library 
{
private:
vector<Book> bookList;



  
public: 
void AddBook();
void CheckoutBook();
void PrintAllBooks();
Library();


}; 
#endif