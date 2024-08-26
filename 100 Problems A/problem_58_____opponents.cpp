/* 
Problem 58: Opponents
Problem Link: https://codeforces.com/problemset/problem/688/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,d;
    cin>>n>>d;

    int win=0, max_win=0;
    for ( int i = 0; i<d; i++) {
        string s;
        cin>>s;

        int col_value_sum = 0;
        for ( int j = 0; j<n; j++ ) {
            if ( s[j] == '1' ) {
                col_value_sum++;
            }
        }
        if ( col_value_sum != n ) {
            win++;
            if ( max_win < win ) {
                max_win = win;
            }
        }
        else {
            win = 0;
        }
    }
    cout<<max_win; 

    return 0;
}