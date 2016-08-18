/********************************************************************************
 * Steven Tang
 * June 12, 2015
 * Daily.h
 * In this class, it defines that daily is. Daily happenes everyday so in the function
 * Occurs_on, it returns true all the time.
 *******************************************************************************/
#ifndef DAILY_H
#define DAILY_H
#include "Appointment.h"
#include <iostream>
using namespace std;

class Daily: public Appointment
{
    
public:
    Daily(){}
    Daily(string de, int ye, int mo, int da, int ho, int mi):Appointment(de, -1, -1, -1, ho,mi){}
    bool occurs_on(int ye, int mo, int da){ return true;}
    void print(){cout<< "There is a daily appointment: " << description << " at " << hour << minute << endl;}
};
#endif