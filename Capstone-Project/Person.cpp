#include "Person.h"
#include <iostream>

string Person::getFirstName(){
  return firstName;
}

string Person::getLastName(){
  return lastName;
}

void Person::setfirstName(string fName){
  firstName = fName;
}

void Person::setLastName(string lName){
  lastName = lName;
}
void Person::printInfo(){
  cout << firstName << " " << lastName;
}
