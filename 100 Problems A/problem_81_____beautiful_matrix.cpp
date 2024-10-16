/* 
Problem 81: Beautiful Matrix
Problem Link: https://codeforces.com/problemset/problem/263/A
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a[5][5];
    for (int i = 0; i<5; i++) {
        for ( int j = 0; j<5; j++ ) {
            cin>>a[i][j];
        }
    }

    int col=0, row=0, mid = 0;
    for (int i = 0; i<5; i++) {
        for ( int j = 0; j<5; j++ ) {
            if ( a[i][j] == 1 ) {
                col = j;
                row = i;
                mid = abs(col-2) + abs(row-2);
                break;
            }
        }
    }

    cout<<mid;

    return 0;
}