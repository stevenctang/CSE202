/**************************************************
* Steven Tang
* file name: Account_main.cpp
* April 7, 2015
* description
***************************************************/

#include <iostream>
#include "Account.h"

using namespace std;

int main(int argc,char*args[])
{
    
    Account savings(1000, 6);
    savings.set_interest_rate(6);
    int years;
    for (years = 0; savings.query() <= 20000; years++)
	{
	    savings.add_interest();
	}
    cout<< years << endl;

    savings.deposit(20); // this line on is from original program
    cout<< savings.query() << endl;

    if (savings.withdraw(50)) {
	cout<< "Successful withdraw .\n";
    } else {
	cout<< "Not enough funds, $5 penatly charged. \n";
	cout<< savings.query()<< endl;
    }
    if (savings.withdraw(80)) {
        cout<< "Successful withdraw .\n";
    } else {
	cout<< "Not enough funds, $5 penatly charged. \n";
	cout<< savings.query()<< endl;
    }
}
