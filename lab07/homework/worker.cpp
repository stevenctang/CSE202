/*******************************************************************************
 * Steven Tang
 * May 20, 2015
 * worker.cpp
 * In this file I defined all the functions that was in worker.h
 * What I did was get all the basics to fill in these functions. Most of them
 * will be used by other .h files in the program
 * 100% Complete
 *******************************************************************************/
#include <iostream>
#include "worker.h"

using namespace std;

Worker::Worker(string n, double salary)
{
    name = n;
    salary_rate = salary;
}
Worker::Worker()
{
    salary_rate = 0;
}
string Worker::get_name()
{
    return name;
}

double Worker::get_salary()
{
    return salary_rate;
}

double Worker::compute_pay(int hours)
{
    return salary_rate * hours;
}
