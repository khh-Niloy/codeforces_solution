/*
Problem 28: Word
Problem Link: https://codeforces.com/problemset/problem/59/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin>>s;

    int upper_sum = 0, lower_sum = 0;
    for ( int i = 0; i<s.length(); i++ ) {
        if ( isupper(s[i]) ) {
            upper_sum++;
        }
        else {
            lower_sum++;
        }
    }

    if ( upper_sum > lower_sum ) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s;
    }
    else {
        transform(s.begin(), s.end(), s.begin(), ::towlower);
        cout<<s;
    }

    return 0;
}