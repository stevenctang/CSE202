/**************************************************************
 * name
 * count.cpp
 * date
 * description
 **************************************************************/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

main()
{
    string word, line;
    int chars = 0, words = 0, lines = 0;
    istringstream line_string;

    getline(cin, line);
    while (!cin.eof()) {

        lines++;

        chars += line.length() + 1; // + 1 for the new-line character

        line_string.str(line); // init stream with line

        // count words in the line until end-of-stream
        while (line_string >> word) 
            words++;

        line_string.clear(); // clear end-of-stream raised in previous while-loop
        
        getline(cin, line);
    }

    cout << lines << ' ' << words << ' ' << chars << endl;
}
