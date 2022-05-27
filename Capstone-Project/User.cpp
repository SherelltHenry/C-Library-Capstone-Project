#include "User.h"
#include <iostream>
#include <string>
using namespace std;

void User::SetUserid(int idNum)
{
  userId = idNum;
}

void User::PrintInfo()
{
  cout << getFirstName() << " " << getLastName() << endl;
  cout << "User ID: " << userId << endl;
}

int User::GetUserid()
{
  return userId;
}