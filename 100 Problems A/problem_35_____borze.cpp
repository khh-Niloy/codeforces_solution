/* 
Problem 35: Borze
Problem Link: https://codeforces.com/problemset/problem/32/B
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin>>s;
    int length = s.length();

    int i = 0;
    while ( i<length ) {
        
        if ( s[i] == '.' ) {
            cout<<"0";
            i++;
        }
        else {
            if (s[i+1] == '.') {
                cout<<"1";
            }
            else {
                cout<<"2";
            }
            i+=2;
        }
    }
    
    return 0;
}