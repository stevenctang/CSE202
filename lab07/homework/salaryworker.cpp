/*******************************************************************************
 * Steven Tang
 * May 20, 2015
 * salaryworker.cpp
 * In this file, I just define all the functions that was stated in salaryworker.h
 * We determine how we pay the salaried workers which is just normal. We don't give 
 * them overtime.
 * 100% Complete
 *******************************************************************************/
#include "salaryworker.h"
#include <iostream>

using namespace std;

SalariedWorker::SalariedWorker(string name, double salary):Worker(name, salary)
{
    
}

double SalariedWorker::compute_pay(int hours)
{
    return salary_rate * hours; // just * hours because nothing happens when they work over 40 hours
}