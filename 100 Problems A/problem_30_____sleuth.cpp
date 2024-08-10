/*
Problem 30: Sleuth
Problem Link: https://codeforces.com/problemset/problem/49/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    getline(cin, s); //reads including spaces
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    char ch;

    for ( int i = s.length(); i>=0; i-- ) {
        if ( isalpha(s[i]) ) {
            ch = s[i];
            break;
        }
    }

    if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y' ) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    

    return 0;
}