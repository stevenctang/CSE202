/*******************************************************************************
* Steven Tang
* April 24, 2015
* homework2.cpp
* In this homework assignment, we are needed to return the average of a set of numbers and find the maximum LOCATION of the numbers.
* What I did first was find the average where I added up all the numbers in my array and named it "total".
* After I put it in total, I divided it all by the size of the array which is a_size.
* To find the maximum of the array, what I did was set the max number to the first location, then if anything was greater than the first location I would make that the new max and print out the location.
********************************************************************************/

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

double average(double * a, int a_size)
{
    double total = 0;
    for (int i = 0; i < a_size; i++){
        total += *(a++); // a loop that adds numbers inside of the array
    }
    return total/a_size;
}

double * maximum(double * a, int a_size)
{
    double *max = a;
    for(int i = 1; i < a_size; i++){
        if(a[i] > *max)
            max = &a[i]; //& Shows the memory location of max
    }
    return max;
}

int main( int argc, char * args [])
{
    int i;
    double arr[20];
    int size = 0;
    
    fstream cin;
    cin.open("homework2.txt"); // Opens file where numbers are located and will put them into arr[]
    
    cin >> arr[size];
    while (!cin.eof()) { // reads until end of file, incremenets count while adding numbers into array
        size++;
        cin >> arr[size];
    }
    
    cout<< "The numbers that are in homework.txt are: \n";
    for(int i = 0; i < size; i++){
        cout<< arr[i] << endl;
    }
    
    cout << "The average of these numbers are: "<< average(arr,size) << endl;
    cout << "The maximum location of these numbers is at: "<< maximum(arr,size) << endl;
   
}