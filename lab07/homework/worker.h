/*******************************************************************************
 * Steven Tang
 * May 20, 2015
 * worker.h
 * In this file I just figured out what needed to be defined for all the workers.
 * We would get name, salary, and hourlypay of the worker.
 * 100% Complete
 *******************************************************************************/
#ifndef WORKER_H
#define WORKER_H

#include <string>

using namespace std;


class Worker
{
public:
    Worker(string, double);
    Worker();
    virtual double compute_pay(int);
    string get_name();
    double get_salary();
protected:
    string name;
    double salary_rate;
    
};
#endif
