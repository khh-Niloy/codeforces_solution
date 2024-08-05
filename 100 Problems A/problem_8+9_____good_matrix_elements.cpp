/*
Problem 8+9: Good Matrix Elements
Problem Link: https://codeforces.com/problemset/problem/177/A1
https://codeforces.com/problemset/problem/177/A2

same question
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n][n];
    for ( int i = 0; i<n; i++ ) {
        for ( int j = 0; j<n; j++ ) {
            cin>>a[i][j];
        }
    }

    int mid = (n-1)/2;
    int diagonal_sum = 0;

    for ( int i = 0; i<n; i++ ) {
        for ( int j = 0; j<n; j++ ) {
            if ( i==j || (i+j) == n-1 ) {
                diagonal_sum+=a[i][j];
            }
        }
    }

    int mid_row_sum = 0;
    for ( int i = mid; i<=mid; i++ ) {
        for ( int j = 0; j<n; j++ ) {
            if(i!=j){
                mid_row_sum+=a[i][j];
            }
        }
    }

    int mid_col_sum = 0;
    for ( int j = mid; j<=mid; j++ ) {
        for ( int i = 0; i<n; i++ ) {
            if(i!=j){
                mid_col_sum+=a[i][j];
            }
        }
    }

    int total = diagonal_sum + mid_row_sum + mid_col_sum;
    cout<<total;

    return 0;
}
