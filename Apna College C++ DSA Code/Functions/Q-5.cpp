/*

Question 5 : Write a function that accepts a character (ch) as parameters & returns
the character that occurs after ch in the English alphabet.

Eg : input = ‘c’, return value = ‘d’

Note : for ch = ‘z’, return ‘a’.

*/

#include<iostream>

using namespace std;

char next_char(char ch)
{
    if(ch=='z')
    {
        return 'a';
    }

    else if(ch=='Z')
    {
        return 'A';
    }

    else
    {
        return (ch+1);
    }
}

int main()
{
    char cht;

    cout<<"Enter any character of English Alphabet: ";

    cin>>cht;

    cout<<"The character following "<<cht<<" in English Alphabet is: "<<next_char(cht);

    return 0;

}
