/********************************************************************************
 * Steven Tang
 * June 12, 2015
 * Appointment.h
 * In this class, I define all the variables that are in an appointment which are hours, minutes,
 * year, day, and month. For an appointment I made it so that there is a description
 * for that appointment as well as what day/time it occurs.
 *******************************************************************************/
#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <string>
#include <iostream>
using namespace std;

class Appointment
{
protected:
    string description;
    int hour;
    int minute;
    int year;
    int day;
    int month;

public:
    Appointment() { }
    Appointment(string de, int ye, int mo, int da, int ho, int mi) {
        description = de;
        year = ye;
        month = mo;
        day = da;
        hour = ho;
        minute = mi;
    }
    string get_description(){ return description; }
    int get_month(){ return month; }
    int get_day(){ return day; }
    int get_year(){ return year; }
    int get_minute(){ return minute; }
    int get_hour(){ return hour; }
    virtual bool occurs_on(int ye, int mo, int da){ return 0;}
    virtual void print() {}
};
#endif