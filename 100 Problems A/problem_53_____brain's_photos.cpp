/* 
Problem 53: Brain's Photos
Problem Link: https://codeforces.com/problemset/problem/707/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,m;
    cin>>n>>m;

    char a[n][m];
    for ( int i = 0; i<n; i++ ) {
        for ( int j = 0; j<m; j++ ) {
            cin>>a[i][j];
        }
    }

    bool color = false;
    for ( int i = 0; i<n; i++ ) {
        for ( int j = 0; j<m; j++ ) {
            if ( a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y' ) {
                color = true;
                break;
            }
        }
    }

    if ( color ) {
        cout<<"#Color";
    }
    else {
        cout<<"#Black&White";
    }
    
    return 0;
}