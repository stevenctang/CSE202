/*******************************************************************************
 * Steven Tang
 * May 20, 2015
 * salaryworker.h
 * In this .h file, I defined what a salaried worker needed. It's a dervived class
 * of worker.h
 * 100% Complete
 *******************************************************************************/
#ifndef SALARYWORKER_H
#define SALARYWORKER_H
#include "worker.h"
#include <iostream>

using namespace std;

class SalariedWorker : public Worker
{
public:
    SalariedWorker(string, double);
    SalariedWorker();
    virtual double compute_pay(int);
    
};
#endif