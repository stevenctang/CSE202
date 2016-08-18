 /*******************************
 * Steven Tang
 * Bank.cpp
 * April 7,2015
 * 100% Complete
 * ******************************/

#include "Bank.h"
#include <iostream>

using namespace std;

Bank::Bank(): savings(), checking()
{
    
}

Bank::Bank(double savings_amount, double checking_amount): savings(savings_amount, 0), checking(checking_amount,0)
{
    
}

void Bank::deposit(double amount, string account)
{
    if(account == "S") {
        savings.deposit(amount);
    } else if (account == "C") {
        savings.deposit(amount);
    } else if (account == "CH") {
		cout<< "Invalid account, Choose C for checkings or S for savings."<<endl;
    }

}

void Bank::withdraw(double amount, string account)
{
    if(account == "S") {
        savings.withdraw(amount);
    } else if (account == "C"){
        checking.withdraw(amount);
    } else if ( account == "CH"){
        cout << "Invalid account: " << account << " ";
    }

}

void Bank::transfer(double amount, string account)
{
    if (account=="S") {
		savings.withdraw(amount);        
		checking.deposit(amount);
    } else if (account == "C") {
        checking.withdraw(amount);
        savings.deposit(amount);
    } else if (account == "CH") {
        cout<< "Invalid account" << endl;
    }
}
    

void Bank::print_balances()
{
    cout <<"Your savings is: "<< savings.query()<<". " <<"Your checkings is: "<< checking.query() <<"\n";
}

