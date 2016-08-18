/*******************************************************************************
 * Steven Tang
 * Person.h
 * May 9, 2015
 * This class is the base class which instructor and student will use. In this class,
 * we have the print function as well as string name, dob, and gender.
 * Even though it's protected, the strings may be used by the dervived class. I used ArgoUML to get the "Skeleton" of
 * the code.
 * 100% Complete
 *******************************************************************************/
#ifndef Person_h
#define Person_h

#include <string>

using namespace std;

class Person
{
public:
    Person();
    Person(string n, string d, string g);
    virtual void print();
protected:
    string name;
    string dob;
    string gender;
};

#endif // Person_h
