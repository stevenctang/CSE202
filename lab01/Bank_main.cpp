/**************************************************
 * Steven Tang
 * file name: Bank_main.cpp
 * April 7, 2015
 * Class Bank
 ***************************************************/

#include <iostream>
#include <string>

#include "Bank.h"
#include "Account.h"
using namespace std;

int main( int argc,char*args [] )
{
	Bank csusb_bank(1000, 100);
 
    csusb_bank.deposit(50, "S");
	csusb_bank.withdraw(10, "CH");
	csusb_bank.withdraw(10,"C");
	csusb_bank.transfer(40, "S");
	csusb_bank.withdraw(150, "C");
	csusb_bank.print_balances();
}
