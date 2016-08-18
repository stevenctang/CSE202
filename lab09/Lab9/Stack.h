/**********************************************************************
 * Steven Tang
 * June 3, 2015
 * Stack.h
 * In this file, I changed void pop() and T top() because when you call it
 * in the main file and if the vector is empty, the program will crash.
 * What I did to make it work was just modify it by using an if statement
 * to cout the container is empty and/or return the t constructor.
 **********************************************************************/
#ifndef STACK_H
#define STACK_H

#include <vector>

using namespace std;

template<typename T>
class Stack
{
    vector<T> container;//private
public:
    Stack(): container(){}
    void push(T x) { container.push_back(x); }
    void pop() {
        if(!container.empty())
            container.pop_back();
        else
            cout<< "Container is empty, can't pop anything." << endl;
    }
    T top() {
        if(!container.empty())
            return container.back();
        else
            cout<< "Container is empty so there's no top." << endl;
            return T();
    }
    bool empty() { return container.empty(); }
};
#endif