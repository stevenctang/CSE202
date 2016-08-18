/************************************************************************
 * Steven Tang
 * Person.cpp
 * April 29, 2015
 *
 * *********************************************************************/

#include "Personc.h"

string Person::get_name()
{
    return name;
}

string Person::get_best_friend()
{
    if (best_friend != 0) // Check for null pointer
        return best_friend->name;
    else return "";
}

int Person::get_popularity()
{
    return popularity;
}

void Person::set_best_friend(Person * bf)
{
    best_friend = bf;
    (bf ->popularity)++;
}

