#include <iostream>
#include "salaryworker.h"
#include "hourlyworker.h"
#include "worker.h"

using namespace std;

int main(int argc,char*args[])
{
    HourlyWorker a ("Steven", 30);
    HourlyWorker b ("John", 45);
    SalariedWorker c ("Josh", 20);
    SalariedWorker d ("Tyson", 40);
    SalariedWorker e ("Henry", 50);
    
    cout << a.get_name() <<" is a hourly worker that earns " << a.get_salary()<< "$"<< endl;
    cout << " He worked 30 hours to get a paycheck of " << a.compute_pay(30) << "$" << endl;
    cout << b.get_name() <<" is a hourly worker that earns " << b.get_salary()<< "$";
    cout << " He worked 45 hours to get a paycheck of " << b.compute_pay(45) << "$" << endl;
    cout << c.get_name() <<" is a salaried worker that earns " << c.get_salary()<< "$";
    cout << " He has worked 20 hours to get a paycheck of " << c.compute_pay(20) << "$" << endl;
    cout << d.get_name() <<" is a salaried worker that earns " << d.get_salary()<< "$";
    cout << " He has worked 45 hours to get a paycheck of " << d.compute_pay(40) << "$" << endl;
    cout << e.get_name() <<" is a salaried worker that earns " << e.get_salary()<< "$";
    cout << " He has worked 50 hours to get a paycheck of " << e.compute_pay(50) << "$" << endl;
    
    return 0;
}