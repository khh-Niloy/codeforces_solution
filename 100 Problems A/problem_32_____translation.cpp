/* 
Problem 32: Translation
Problem Link: https://codeforces.com/problemset/problem/41/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s,s2;
    cin>>s>>s2;

    int sum = 0;
    int length = s.length();
    int length2 = s2.length();

    for ( int i = 0; i<length; i++ ) {
        if ( s[i] == s2[length-i-1] ) {
            sum++;
        }
    }

    if ( sum == length && length==length2 ) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}