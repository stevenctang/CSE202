/********************************************************************************
 * Steven Tang
 * June 12, 2015
 * Monthly.h
 * In this class I defined what monthly is. Monthly happens every month at least one time
 * a month, and what I checked was if the date happens at least once, that means its monthly.
 *******************************************************************************/
#ifndef MONTHLY_H
#define MONTHLY_H
#include <iostream>
#include <string>
#include "Appointment.h"

using namespace std;

class Monthly: public Appointment
{
public:
    Monthly(){}
    Monthly(string de, int ye, int mo, int da, int ho, int mi): Appointment(de, -1 , -1, da, ho, mi){}
    bool occurs_on(int ye, int mo, int da){
        if( day == da)
        return true;
    else
        return false;
    }
    void print(){ cout << "There's a monthly appointment: " << description << " at " << day << hour << minute << endl; }
};
#endif