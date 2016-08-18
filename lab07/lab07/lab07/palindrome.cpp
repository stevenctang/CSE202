/**********************************************************************
 * Steven Tang
 * palindrome.cpp
 * May 20th, 2015
 * In this program, it asks the user to enter a word or phrase. The program
 * will then determine if what the user entered is a palindrome or not.
 * What was required of me was to edit the program so that it changes uppercase characters
 * into lower case, which the function to_lower does exactly. Also, it required
 * me to add a function to read just characters which the is_letter does.
 * 100% Complete
 * *******************************************************************/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function determines if the char is a letter or not by using the ascii table
bool is_letter(char c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return true;
    return false;
}
// Function takes an uppercase character and changes it to a lowercase character, if it's already a lowercase it does nothing
char to_lower(char c)
{
    char letter = c;
    if (c > 64 && c < 91){
        letter += 32;
        return letter;
    } else if (c > 96 && c < 123){
        return c;
    }
    return letter;
}
// In this function, it checks if it's a palindrome. First it checks whether or not the string is the same. Then it checks if the first character or last character of the string is a letter. Afterwards it changes all the letters to lowercase. Following that, it cuts off all the white space, making it ignore it and skipping to the next character that isn't a white space.
bool is_palindrome(string s)
{
    if (s.length() <= 1)
        return true;
    
    char first = s[0];
    char last = s[s.length() - 1];
    if (first != last) {
        if (is_letter(first) == true || is_letter(last) == true) {
            first = to_lower(first);
            last = to_lower(last);
            if (to_lower(last) == to_lower(first)) {
                string shorter = s.substr(1, s.length() - 2); // this cuts out the white spaces so the program will read just the characters
                return is_palindrome(shorter); // recursion call
            }
        }
    }
    if (first == last) {
        string shorter = s.substr(1, s.length() - 2);
        return is_palindrome(shorter); // recursion call
    }
    if (is_letter(first) == false) {
        string shorter = s.substr(1, s.length() - 1);
        return is_palindrome(shorter); // recursion call
    } else if (is_letter(last) == false) {
        string shorter = s.substr(0, s.length() - 1);
        return is_palindrome(shorter); // recursion call
    }
    return false;
}

int main(int argc, char * args[])
{
    cout << "Enter a string: ";
    string input;
    getline(cin, input);
    cout << "\'" << input << "\' is ";
    if (!is_palindrome(input))
        cout << "not ";
    cout << "a palindrome.\n";
    
} // end of main