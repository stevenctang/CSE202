/*******************************************************************************
 * Steven Tang
 * May 20, 2015
 * hourlyworker.h
 * In this .h file I defined what needed to be defined for a hourly worker. This
 * is a dervived class of worker.h
 * 100% Complete
 *******************************************************************************/
#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H
#include "worker.h"
#include <iostream>
#include <string>

using namespace std;

class HourlyWorker: public Worker // dervived class of worker
{
public:
    HourlyWorker(string, double);
    HourlyWorker();
    virtual double compute_pay(int);
};
#endif