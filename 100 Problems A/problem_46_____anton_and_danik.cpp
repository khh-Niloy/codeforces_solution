/* 
Problem 46: Anton and Danik
Problem Link: https://codeforces.com/problemset/problem/734/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    string s;
    cin>>s;

    int sum_A = 0, sum_D = 0;
    for ( int i = 0; i<s.length(); i++ ) {
        if ( s[i] == 'A' ) {
            sum_A++;
        }
        else if ( s[i] == 'D' ) {
            sum_D++;
        }
    }

    if ( sum_A > sum_D ) {
        cout<<"Anton";
    }
    else if ( sum_A < sum_D ) {
        cout<<"Danik";
    }
    else {
        cout<<"Friendship";
    }

    return 0;
}