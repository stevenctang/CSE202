 /***************************
 * Steven Tang
 * Account.cpp
 * April 7,2015
 * 100% Complete
 * **************************/

#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(): balance(0), interest_rate(0) { }

Account:: Account(double amount, double rate): balance(amount), interest_rate(rate) { }

void Account::deposit(double amount)
{
    balance += amount;
}

bool Account::withdraw(double amount)
{
    bool status;
    if (amount > balance) {
        balance -= 5; //penalty if not enough $ in account
        status = false;
    } else {
        balance -= amount;
        status = true;
    }
    return status;
}

double Account::query()
{
    return balance;
}

void Account::set_interest_rate(double rate)
{
    this->interest_rate = rate/100; 
}

double Account::get_interest_rate()
{
    return interest_rate;
}

void Account::add_interest()
{
    balance = (balance * interest_rate) + balance;    
}
