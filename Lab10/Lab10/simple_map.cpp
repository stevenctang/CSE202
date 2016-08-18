/*********************************************************************
 * Steven Tang
 * 6/10/2015
 * In this lab we're changing the program to make it work when we enter 
 * the full name of the month instead of just having Jan or Feb.
 * For example, if we enter January it would return true.
 * 100% Complete
 *********************************************************************/
#include <map>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char*args[])
{
    map<string, bool> m;
    
    m["Jan"] = true;
    m["Feb"] = false;
    m["Mar"] = true;
    m["Apr"] = false;
    m["May"] = true;
    m["Jun"] = false;
    m["Jul"] = true;
    m["Aug"] = true;
    m["Sep"] = false;
    m["Oct"] = true;
    m["Nov"] = false;
    m["Dec"] = true;
    m["January"] = true;
    m["February"] = false;
    m["March"] = true;
    m["April"] = false;
    m["June"] = false;
    m["July"] = true;
    m["August"] = true;
    m["September"] = false;
    m["October"] = true;
    m["November"] = false;
    m["December"] = true;
    
    string response;
    
    cout << "Enter a month name: ";
    cin >> response;
    
    if (m[response])
        cout << "This is a 31-day month.\n";
    else
        cout << "This is a non-31-day month or it is an invalid month name.\n";
}