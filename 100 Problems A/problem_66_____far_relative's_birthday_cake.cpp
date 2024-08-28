/* 
Problem 66: Far Relative’s Birthday Cake
Problem Link: https://codeforces.com/problemset/problem/629/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    cin>>n;

    char a[n][n];
    for ( int i = 0; i<n; i++ ) {
        for ( int j = 0; j<n; j++ ) {
            cin>>a[i][j];
        }
    }

    int row_pair = 0;
    for ( int i = 0; i<n; i++ ) {
        int count = 0;
        for ( int j = 0; j<n; j++ ) {
            if ( a[i][j] == 'C' ) {
                count++;
            }
        }
        if ( count > 1 ) {
            row_pair+=(count*(count-1))/2;
        }
    }

    int col_pair = 0;
    for ( int j = 0; j<n; j++ ) {
        int count = 0;
        for ( int i = 0; i<n; i++ ) {
            if ( a[i][j] == 'C' ) {
                count++;
            }
        }
        if ( count > 1 ) {
            col_pair+=(count*(count-1))/2;
        }
    }

    cout<<row_pair+col_pair;

    return 0;
}