#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void student::setName(string f, string l)
{
        firstName = f;
        lastName = l;
}

string student::fullName()
{
        string fullname = firstName+" "+lastName;
        return fullname;
}


