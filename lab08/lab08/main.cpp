/*******************************************************************************
 * Steven Tang
 * main.cpp
 * May 29, 2015
 * In this lab, we are needed to implement the functions selection_sort which sorts
 * the numbers in the vector in order from least to greatest, and binary search which
 * searches for a number. If the number is higher then the middle value, we would split
 * the upper half in 2 again or if the number we are searching for is lower than the middle
 * we would split the lower half in half. We would repeat this process until the number is found.
 * 100% Complete
 * Big O notation for binary_search is O(log(n)) and for selection_sort is O(n^2)
 ******************************************************************************/
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void selection_sort(vector<int> &arr)
{
    int n = arr.size();
    int i, j;
    for( i = 0; i < n - 1; i++)
        for( j = i+1; j< n ; j++)
            if ( arr[i] > arr[j])
                swap (arr[i], arr[j]);
}

int binary_search(vector<int> v, int from, int to, int value)
{
    if(from>to)
        return -1;
    int mid = (from + to) / 2;
    if( v[mid] == value)
        return mid;
    else if(v[mid] < value)
        return binary_search(v,mid+1, to, value);
    else
        return binary_search(v, from, mid-1, value);
}

int main()
{
    vector<int> v;
    int from = 0;
    int to = 7;
    ifstream in;
    in.open("numbers");
    if(in.fail())
    {
        cout<< "Couldn't open the file." << endl;
    }
    while (!in.eof())
    {
        int n;
        in >> n;
            if(in.eof()) // this if statement is here so it doesn't put the last number in the file to the vector twice
                break;
        v.push_back(n);
    }
    
    selection_sort(v); // Sorts the vector from least to greatest
    
    cout<< "The vector sorted is: "<< endl;
    for(int i = 0; i<v.size() ; i++)
    {
        cout<< v[i] << endl;
    }
    cout<< "Enter the number you would like to search for to display the position" << endl;
    int x;
    cin>> x;
    while(!cin.eof())
    {
        cout<< binary_search(v, from, to, x)<< endl; // calls to the function binary_search
        cin>> x;
    }
    in.close(); // closes the numbers file we opened
}// end main