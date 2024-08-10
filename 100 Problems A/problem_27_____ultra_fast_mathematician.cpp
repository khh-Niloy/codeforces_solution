/*
Problem 27: Ultra-Fast Mathematician
Problem Link: https://codeforces.com/problemset/problem/61/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s_num1,s_num2;
    cin>>s_num1>>s_num2;

    int length = s_num1.length();
    for (int i = 0; i<length; i++) {
        if ( s_num1[i] != s_num2[i] ) {
            cout<<"1";
        }
        else {
            cout<<"0";
        }
    }

    return 0;
}

/* 
Note:
If you input an integer like 010, it will convert to 10 because the leading zero is ignored.
To prevent this, use a string instead.
*/