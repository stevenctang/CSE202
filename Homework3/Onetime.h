/********************************************************************************
 * Steven Tang
 * June 12, 2015
 * Onetime.h
 * A one time appointment takes all parameters because it only happens once.
 * If all the parameters are met, that means the appointment occurs on that day.
 *******************************************************************************/
#ifndef ONETIME_H
#define ONETIME_H
#include "Appointment.h"

using namespace std;

class Onetime: public Appointment
{

public:
    Onetime(){}
    Onetime(string de, int ye, int mo, int da, int ho, int mi):Appointment (de, ye, mo, da, ho, mi){}
    bool occurs_on(int ye, int da, int mo){
        if( year == ye && day == da && month == mo)
            return true;
        else
            return false;
    }
    void print(){ cout <<"There is a ONE TIME appointment"<< description << "on" << year << day<< month << hour << minute << endl; }
};
#endif