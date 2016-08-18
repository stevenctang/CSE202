/*******************************************************************************
 * Steven Tang
 * Instructor.h
 * May 9, 2015
 * This is the class particularly for instructors. It is the a class dervived from the
 * base class Person. It uses the functions that are in Person only if it's public,
 * and it adds to it by stringing the salary of the instructor. I used ArgoUML to get the "Skeleton" of
 * the code.
 * 100% Complete
 *******************************************************************************/
#ifndef Instructor_h
#define Instructor_h

#include "Person.h"
#include <string> 

using namespace std;

class Instructor : public Person
{
public:
    Instructor();
    Instructor(string n, string d, string g, int s);
    virtual void print();
protected:
    int salary;
};

#endif // Instructor_h
