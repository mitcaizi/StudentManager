#ifndef _STUDENT_H_
#define _STUDENT_H_
#include<iostream>
using namespace std;
class student
{
private:
     string firstName;
     string lastName;
public:
     void setName(string, string);
     string fullName();
};
#endif
