#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string sortstr(string s)
{
    sort(s.begin(), s.end());
    return s;
}

int main()
{
    cout<< "Enter the first string\n";
    string s1;
    cin>> s1;

    cout<< "Enter the second string\n";
    string s2;
    cin>> s2;

    if(sortstr(s1)==sortstr(s2))
        cout<< "The words are Anagrams";
    else
        cout<< "The words are not Anagrams";

    return 0;
}

