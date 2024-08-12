/* 
Problem 36: Reconnaissance
Problem Link: https://codeforces.com/problemset/problem/32/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,d,a[1000];
    cin>>n>>d;

    for ( int i = 0; i<n; i++ ) {
        cin>>a[i];
    }
    
    int ways = 0;

    for ( int i = 0; i<n-1; i++ ) {
        if ( abs(a[n-1] - a[i]) <= d ) {
            ways++;
        }
    }

    for ( int i = 0; i<n-1; i++ ) {
        for ( int j = 0; j<n; j++ ) {
            if (i!=j) {
                if ( abs(a[i] - a[j]) <=d ) {
                    ways++;
                }
            }
        }
    }

    cout<<ways;
    
    return 0;
}