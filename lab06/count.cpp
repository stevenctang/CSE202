/******************************************************************************
 * Steven Tang
 * count.cpp
 * May 14, 2015
 * In this lab, we're trying to read the lines, words, and letters of a file
 * that the user will input. What I did was ask the user to input the file name
 * they would like to count, if it doesn't exist I would just print out that it failed and
 * the program would just exit.
 * I also modified the program to loop so the user can enter multiple files they would like
 * to count.
 * 100% complete
 *****************************************************************************/
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main(int argc , char * args[])
{
    string word, line;
    int chars = 0, words = 0, lines = 0;
    istringstream line_string;
    
    while (!cin.eof()) { // loops user enters ctrl D
        ifstream in;
        cout<<"Please enter the file you would like to open: "<< endl;
        string file;
        cin >> file;
       
        in.open(file.c_str()); // Opens the file that the user input
        if(cin.eof()) {
            return 0;
        } else if(in.fail()) {
            cout<<"Couldn't open the file "<< file << endl;
            return 1; // 1 reports that there was something wrong with the file and stops it
        }
        getline(in, line);
        while (!in.eof()) {
        
            lines++;
        
            chars += line.length() + 1; // + 1 for the new-line character
    
            line_string.str(line); // init stream with line
        
            // count words in the line until end-of-stream
            while (line_string >> word)
                words++;
        
            line_string.clear(); // clear end-of-stream raised in previous while-loop
    
            getline(in, line);
        }
        cout << lines << ' ' << words << ' ' << chars << endl;
        in.close();
    } // end of the loop where program asks user to input the name of their files
}// end of main function