#ifndef PERSONH
#define PERSONH
#include <iostream>
#include <string>
using namespace std;

class Person{

protected:

string firstName;
string lastName; 

public: 

Person(string userFName = "First", string userLName = "Last")
{
  firstName=userFName;
  lastName=userLName;
}
 
string getFirstName();

string getLastName();

void setfirstName(string fName);

void setLastName(string lName);

void printInfo();

};
#endif 