/*******************************************************************************
 * Steven Tang
 * May 20, 2015
 * hourlyworker.cpp
 * In this .cpp file, I needed to define function commute_pay for the hourly worker.
 * What it contains is the regular hours * pay and if they work more than 40 hours,
 * they are paid overtime which is an hour and a half added to their paycheck.
 * 100% Complete
 *******************************************************************************/
#include "hourlyworker.h"
#include <iostream>

using namespace std;

HourlyWorker::HourlyWorker(string name, double salary):Worker(name, salary)
{
    
}

double HourlyWorker::compute_pay(int hours)
{
    if(hours <=40)
        return salary_rate * hours; // nothing happens if hourly worker works > 40 hours
    else
        return (salary_rate*40) + (hours-40) * salary_rate * 1.5; // but if they do, they get time and a half
}