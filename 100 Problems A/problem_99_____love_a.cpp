/* 
Problem 99: Love "A"
Problem Link: https://codeforces.com/problemset/problem/1146/A
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    cin>>s;

    int count_a = 0;
    int count_other = 0;
    for ( int i = 0; i<s.length(); i++ ) {
        if ( s[i] == 'a' ) {
            count_a++;
        }
        else{
            count_other++;
        }
    }

    if ( count_other >= count_a ) {
        cout<<count_a+count_a-1;
    }
    else{
        cout<<count_other+count_a;
    }

    return 0;
}