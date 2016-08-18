/**********************************************************************
 * Steven Tang
 * June 3, 2015
 * Stack_test.cpp
 * In this lab, we're required to understand what it does and change it so
 * when we call s2.pop() and s.top() at the end it'll work.
 * If we were to call s2.pop() or s.top() when s2 is empty, the program would 
 * crash and we would get a segmentation fault.
 **********************************************************************/
#include <iostream>
#include <string>

#include "Stack.h"

int main()
{
    Stack<int> s1;
    
    s1.push(4);
    s1.push(3);
    s1.push(2);
    s1.push(1);
    while (!s1.empty()) {
        cout<< s1.top() << endl;
        s1.pop();
    }
    
    Stack<string> s2;
    s2.push("Yoda said ");
    s2.push("something ");
    s2.push("to write ");
    while (!s2.empty()) {
        cout<< s2.top();
        s2.pop();
    }
    cout<<endl;
    s2.pop();
    cout<< s2.top() <<endl;
}