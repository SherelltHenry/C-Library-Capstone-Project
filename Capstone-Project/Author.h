#ifndef AUTHORH
#define AUTHORH
#include "Person.h"
using namespace std;

class Author : public Person{
public:
Author(string fname = "None", string lname = "None"):Person(fname, lname)
{

}

};
#endif