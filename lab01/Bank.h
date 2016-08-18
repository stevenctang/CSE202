/**************************************************
 * Steven Tang
 * file name:Bank.h
 * April 7, 2015
 * description
 ***************************************************/
#ifndef BANK_H
#define BANK_H

#include <string>
#include "Account.h"

using namespace std;

class Bank 
{
private:
        Account savings;
        Account checking;
public:
        Bank();
        Bank(double savings_amount, double checking_amount);
        void deposit(double amount, string account);
        void withdraw(double amount, string account);
        void transfer(double amount, string account);
        void print_balances();
};

#endif
