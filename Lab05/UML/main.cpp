/*******************************************************************************
 * Steven Tang
 * main.cpp
 * May 9, 2015
 * In this main.cpp file, we make use of all the .h files and .cpp files.
 * We were needed to use the header file class to seperate the code that Professor Zemoudeh
 * gave us. When doing this were needed to include virtual to the beginning of print.
 * To do this we used the application called ArgoUML to help us build the class skeleton
 * and it was our job to fill in the .cpp files as well as the main.cpp file.
 * 100% Complete
 *******************************************************************************/
#include <iostream>
#include <string> 
#include <vector> 
#include "Instructor.h"
#include "Person.h"
#include "Student.h"

using namespace std;

int main(int argc, char * args [])
{
    vector<Person *> dudes(4); // vector of pointers to Person (dudes or dudets)
    
    // normal assignment of the same types: pointer to Person
    dudes[0] = new Person("Steven", "3/16/75", "M");
    
    // pointer of a derived class assigned to a pointer of base class
    dudes[1] = new Student("Jazmin", "4/15/85", "F", "CS");
    
    // two more examples
    dudes[2] = new Instructor("Paul", "5/24/93", "M", 75000);
    dudes[3] = new Instructor("Lily", "2/1/80", "F", 80000);
    
    for (int i = 0; i < dudes.size(); i++)
        dudes[i]->print(); // dynamically (at run time) the correct print() is called
    
    Person p = *(dudes[2]); // sliced off Instructor
    p.print();
    
    // clean up
    for (int i = 0; i < dudes.size(); i++)
        delete dudes[i];
}