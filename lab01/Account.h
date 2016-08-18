/**************************************************
 * Steven Tang
 * file name: Account.h
 * April 7, 2015
 * description
 ***************************************************/
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    double balance;
    double interest_rate; // for example, interest_rate = 6 means 6%

public:
    Account();
    Account(double amount, double rate);
    void deposit(double);
    bool withdraw(double); // returns true if enough money,else return fals
    double query();
    void set_interest_rate(double rate);
    double get_interest_rate();
    void add_interest();
};

#endif
