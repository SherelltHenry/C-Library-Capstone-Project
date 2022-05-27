#ifndef USERH
#define USERH

#include "Person.h"
using namespace std;

class User : public Person {
public:
  int GetUserid();
  void SetUserid(int idNum);
  void PrintInfo();
  User(string fname = "None", string lname = "None", int idNum = -111) : Person (fname, lname) 
  {
    userId = idNum;
  };

  private:
  int userId;
};

#endif