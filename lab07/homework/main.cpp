/*******************************************************************************
 * Steven Tang
 * May 20, 2015
 * main.cpp
 * In this file, we test if our program works. We assign 4 workers to hourly worker
 * or salaried worker and give them the amount of hours that they worked as well as the pay.
 * Then the main function prints out how much that worker made.
 * 100% Complete
 *******************************************************************************/
#include <iostream>
#include "salaryworker.h"
#include "hourlyworker.h"
#include "worker.h"

using namespace std;

int main(int argc,char*args[])
{
    HourlyWorker a ("Steven", 30);
    HourlyWorker b ("John", 45);
    SalariedWorker c ("Tyson", 40);
    SalariedWorker d ("Henry", 50);
    
    cout << a.get_name() <<" is a hourly worker that earns " << a.get_salary()<< "$.";
    cout << " He worked 30 hours to get a paycheck of " << a.compute_pay(30) << "$" << endl;
    cout << b.get_name() <<" is a hourly worker that earns " << b.get_salary()<< "$.";
    cout << " He worked 45 hours to get an overtime paycheck of " << b.compute_pay(45) << "$." << endl;
    cout << c.get_name() <<" is a salaried worker that earns " << c.get_salary()<< "$.";
    cout << " He has worked 20 hours to get a paycheck of " << c.compute_pay(20) << "$." << endl;
    cout << d.get_name() <<" is a salaried worker that earns " << d.get_salary()<< "$.";
    cout << " He has worked 45 hours to get a paycheck of " << d.compute_pay(45) << "$." << endl;
  
}