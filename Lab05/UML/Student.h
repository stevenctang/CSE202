/*******************************************************************************
 * Steven Tang
 * Student.h
 * May 9, 2015
 * This Student.h file is a dervived class from the base class Person.h.
 * We use all the public functions in Person.h as well as adding additional functions
 * to the file. I used ArgoUML to get the "Skeleton" of the code.
 * 100% Complete
 *******************************************************************************/
#ifndef Student_h
#define Student_h

#include "Person.h"
#include <string>

using namespace std;

class Student : public Person
{
public:
    Student();
    Student(string n, string d, string g, string m);
    virtual void print();
protected:
    string major;
};

#endif // Student_h
