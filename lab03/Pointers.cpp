/***********************************************
 * Steven Tang
 * Pointers.cpp
 * Aprl 22, 2015
 * In this lab, we have to make the array version of the function into a pointer version.
 * The s/p infront of the function states whether it's a pointer/function version
 * Example: astrlen is an array function, pstrlen is a pointer function
 * 100% Complete
 ***********************************************/

#include <iostream>
#include <string>


using namespace std;


void astrcpy( char t[], const char s[])
{
    for (int i = 0; (t[i] = s[i]); i++);
}

void pstrcpy(char * t, const char*s)
{
    for ( ; (*t++ = *s++); );
}

void astrncpy(char t[], const char s[], const unsigned int n)
{
    unsigned int i;

    for (i = 0; i<n and s[i]; i++)
        t[i] = s[i];
    
    t[i] = '\0';
}

// Pointer version of strncpy, copies *s to *t until it hits the null character
void pstrncpy( char *t,const char *s, unsigned int n)
{
    unsigned int i;
    
    for(int i = 0; i<n and *(s+i); i++)
        *t++ = *(s+i);
    
    *t = '\0';
}

void astrcat( char t[], const  char s[])
{
    unsigned int i;

    for (i = 0; t[i]; i++);
    
    astrcpy(t+i,s);
}

// Pointer function of strcat, concatenates *s to *t, but must have enough room in *t
void pstrcat(char *t, const char *s)
{
    while(*t != '\0')
        t++;
    
    while((*t++ = *s++));
}

//This function compares the arrays, then give difference give difference of the two
int strcmp(const char *t, const char *s)
{
    for(int i=0; *t++ and *s++; ){
        if(*t != *s)
            return *t - *s;
    }
    return 0;
}

int main ( int argc, char * args[])
{
    char str1[20] = "abcd", str2[20] = "efg";
    
    cout << "str1=" << str1<< " str2=" << str2<< endl;
    cout << "strlen(str1)=" << pstrlen(str1)<< " strlen(str2)=" << pstrlen(str2) << endl;
   
    pstrcpy(str1, str2);
    cout << "str1=" << str1<< endl;

    pstrcat(str1, str2);
    cout << "str1=" << str1<< endl;

    cout << "strcmp(str1, str2)=" << strcmp(str1, str2) << endl;
    cout << "strcmp(str2, \"efh\")=" << strcmp(str2, "efh") << endl;


    pstrncpy(str2, "hi jkl", 2);
    cout << "str2=" << str2<< endl;

    pstrncpy(str2, "hi jkl", 12);
    cout<< "str2=" << str2 << endl;
   
}




