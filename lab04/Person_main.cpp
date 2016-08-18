/********************************************************************************
 * Steven Tang
 * Person_main.cpp
 * April 29, 2015
 * In this lab, the problem we are trying to do is to prevent the user from entering a duplicate name and ask the user to enter another name if the best friend isn't found.
 * How I was able to prevent a duplicate name was by using the if statement within a for loop which goes checks through all the names entered. If the name entered was found in the vector, it would print out that it's a duplicate and ask to enter another name.
 * For the problem if the best friend is not found, it would just ask you to enter a valid best friend.
 * 90% Done, asks for best friend name again one time if best friend not found, doesn't loop.
 * ****************************************************************************/

#include <iostream>
#include <iomanip>    // for setw
#include <string>
#include <vector>

#include "Personc.h"

using namespace std;

int main(int argc, char*args[])
{
    int i, j;
    string name;
    vector<Person *> people; // vector of pointers to objects of type Person
    Person * person_pointer;
    
    cout << "Enter the names, terminate with -1: ";
    cin >> name;
    while (name != "-1") {
        for (i = 0; i < people.size(); i++)
            if (people[i]->get_name()==name)
                break;
        if(i==people.size()) { // checks for duplicate here
            person_pointer = new Person(name);
            people.push_back(person_pointer);
            cout << "Enter another name, end with -1: ";
            cin >> name;
        } else {
            cout<< name << " is a duplicate, please enter another name. \n";
            cin >> name;
        }
    }
    
    // for each person prompt for a best friend name
    for (i = 0; i < people.size(); i++) {
        cout << "Who is " << people[i]->get_name() << "'s best friend? ";
        cin >> name;
        
        // search for best friend
    for (j = 0; j < people.size(); j++)
        if (people[j]->get_name() == name)
            break;
        if (j < people.size()){ // found a best friend
            cout<< people[i]-> get_name() << "'s best friend is "<< name << endl;
            people[i]->set_best_friend(people[j]);
        } else {
            cout << "Couldn't find best friend " << name << ". Please enter another name."<< endl;
            cin >> name;
        }
    }
    // list of name, best friend, and popularity count
    for (i = 0; i < people.size(); i++) {
        person_pointer = people[i];
        cout << left << setw(10) << person_pointer->get_name();
        cout << left << setw(10) << person_pointer->get_best_friend();
        cout << right << setw(2) << person_pointer->get_popularity() << endl;
    }
    
    // clean up
    for (i = 0; i < people.size(); i++)
        delete people[i];
}