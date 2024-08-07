/*
Problem 21: Petya and Strings
Problem Link: https://codeforces.com/contest/112/problem/A
*/

#include <bits/stdc++.h>
#include <strings.h>
using namespace std;

int main() {
    
    string str1,str2;
    cin>>str1>>str2;

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    if ( str1 < str2 ) {
        cout<<"-1";
    }
    else if ( str1 > str2 ) {
        cout<<"1";
    }
    else {
        cout<<"0";
    }
    
    return 0;
}

/* 
Note:
C++ provides built-in string comparison operators that handle this process efficiently for you.
These operators (<, >, <=, >=, ==, and !=) abstract away the need for explicit loops,
allowing you to compare entire strings with a single statement.
*/