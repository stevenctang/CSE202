 /***************************************************************************
 * Steven Tang
 * April 15,2015
 * Vector.cpp
 * This program will ask the user to enter a set of numbers inside of two vectors.
 * With this program, those two vectors will be appended together, merged, and merged again but sorted.
 * 100% Complete
 *****************************************************************************/
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> append_1(vector<int> a, vector<int> b)
{
    vector<int> c;
    int i;
    
    for (i = 0; i<a.size(); i++)
        c.push_back(a[i]);
    
    for (i = 0; i<b.size(); i++)
        c.push_back(b[i]);
    
    return c;
}

vector<int> append_2(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();
    int i;

    vector<int> c(n + m);
    
    for(i = 0; i < n ; i++)
        c[i] = a[i];
    
    for(i = 0; i < m ; i++)
        c[i+n] = b[i];
    
    return c;
}

vector<int> merge( vector<int> a, vector<int> b) // Takes value from 1 vector then takes another from the other vector and repeats
{
    int n = a.size();
    int m = b.size();
    int i;
    
    vector<int> c;
    
    for(i =0 ; i< m and i< n; i++) {
            c.push_back(a[i]); // Takes value from vector A first
            c.push_back(b[i]); // Then takes value from vector B, then repeats
    }
    
    for ( ; i < n; i++) { // Next 3 lines is a for loop that will take the remaining items from the vectors
        c.push_back(a[i]);
    }
    
    for ( ; i< m; i++) { // i is already declared so we don't have to do it again
        c.push_back(b[i]);
    }
    
    return c;
}

vector<int> merge_sorted(vector<int> a, vector<int> b)// Puts 2 vectors together in sorted order
{
    int n = a.size();
    int m = b.size();
    
    vector<int> c(m+n);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    c.resize(a.size() + b.size());
    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
    
    return c;
}

int main( int argc,char*args [])
{
    vector<int> a,b,c;
    int input;
    
        cout<< " Please enter contents of vector A, enter -1 when done"<< endl;
    while((cin >> input) and input != -1)
        a.push_back(input);

        cout<< " Now please enter contents of vector B, enter -1 when done"<< endl;
    while((cin>> input) and input != -1)// Takes user input until they enter -1 to exit
        b.push_back(input);
    
    c = append_2(a,b); // Append function
        cout<< "The numbers entered were: "<<endl;
    for( int i = 0; i<c.size(); i++)
        cout<< c[i] <<endl; // Displays vector c after appending
    
    c = merge(a,b); // Merging function, puts 2 vectors together
        cout<< "The numbers entered were merged together as: "<<endl;
    for( int i = 0; i<c.size(); i++)
        cout<< c[i] <<endl; // Displays vector c after merging together
    
    c = merge_sorted(a,b); // Sort function, puts 2 vectors together and organizes them
        cout<< "The numbers entered were sorted and merged together as: "<<endl;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for( int i = 0; i<c.size(); i++)
		cout<< c[i] <<endl; // Displays vector c after merging and sorting together
}