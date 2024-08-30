/* 
Problem 70: Vitaly and Night
Problem Link: https://codeforces.com/problemset/problem/595/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n,m;
    cin>>n>>m;
    int col = m*2;

    int a[n][col];
    for ( int i = 0; i<n; i++ ) {
        for ( int j = 0; j<col; j++ ) {
            cin>>a[i][j];
        }
    }


    int count = 0,x = 0;
    for ( int i = 0; i<n; i++ ) {
        for ( int j = 0; j<col; j+=2 ) {
            if ( a[i][j] != 0 || a[i][j+1] != 0 ) {
                count++;
            }
        }
    }

    cout<<count;

    return 0;
}