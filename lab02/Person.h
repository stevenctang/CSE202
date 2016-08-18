/*******************************
* Steven Tang
* Person.h
* April 19, 2015
*
********************************/
#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
public:
    Person();
    void readBirthday();
    void get_month (int m);
    void get_day( int d);
    void get_year( int y);
    
    
private:
    string name;
    int month;
    int day;
    int year;
    void check_birthday();
    
    
};

#endif