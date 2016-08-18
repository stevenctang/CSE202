/********************************************************************************
 * Steven Tang
 * June 12, 2015
 * Main.cpp
 * In the cpp file, I created a vector of appointments. I also assigned j to appointment
 * so I can incriment it when the user adds more appointments to it.
 * 60% done, couldn't figure out how to check if an appointment occured on the day that
 * the user wanted to check.
 *******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include "Appointment.h"
#include "Daily.h"
#include "Monthly.h"
#include "Onetime.h"

using namespace std;

int main(int argc, char * args[])
{
    char*ar[4];
    string des, choice;
    int yr,mon,da,hr,min,j,i;
    Appointment appo;
    Daily dail;
    Onetime onet;
    Monthly mont;
    vector <Appointment*> app (j);// j is the size of the vector, and is incremented when a user inputs an appoinment.
    int response;
    cout<< "What type of appointment is it? (1)Daily, (2)Monthly, (3)Onetime." <<endl;
    cin >> response;
        while(!cin.eof()){
            if(response == 1){
            cout<< "Now please enter the description of your DAILY appointment: \n";
            cin >> des;
            cout<< "Please enter the hour on which your appointment occurs on: \n";
            cin >> hr;
            cout<< "Please enter minutes: \n";
            cin >> min;
            app.push_back(new Daily(des,-1,-1,-1,hr,min));
            j++;
        }
        if(response == 2 ){
            cout<< "Now please enter the description of your MONTHLY appointment: \n";
            cin >> des;
            cout<< "Please enter the day you would like to set an appointment on: \n";
            cin >> da;
            cout<< "Please enter the hour on which your appointment occurs on: \n";
            cin >> hr;
            cout<< "Please enter minutes: \n";
            cin >> min;
            app.push_back(new Monthly(des,-1,-1,da,hr,min));
            j++;
        }
        if(response == 3){
            cout<< "Now lease enter the description of your ONETIME appointment: \n";
            cin >> des;
            cout<< "Please enter the year you would like to set an appointment on: \n";
            cin >> yr;
            cout<< "Please enter the month you would like to set an appointment on: \n";
            cin >> mon;
            cout<< "Please enter the day you would like to set an appointment on: \n";
            cin >> da;
            cout<< "Please enter the hour on which your appointment occurs on: \n";
            cin >> hr;
            cout<< "Please enter minutes: \n";
            cin >> min;
            app.push_back(new Onetime(des, yr, mon, da, hr, min));
            j++;
        }
            if (response == -1)
                break;
            cout<< "Add another appointment? (1)Daily, (2)Monthly, (3)Onetime. Enter -1 to exit" <<endl;
            cin >> response;
           
    }
    
    cout<< "Enter a date to check what appointments there are." << endl;
    int year, month, day;
    cout << "Enter the year: "<< endl;
    cin >> year;
    cout << "Enter the month: "<< endl;
    cin >> month;
    cout<< "Enter a day: "<< endl;
    cin >> day;
    
    app.print();
    if(app.occurs_on(year,month,day) == true){
        app.print();
    }else if(onet.occurs_on(year,month,day) == true){
        mont.print();
    }else{
        cout<<"No appointments" << endl;
    }
    for(int i = 0; i < app.size(); i++)
        delete app[i];
}// end main function