/*
Problem 10: Next Round
Problem Link: https://codeforces.com/problemset/problem/158/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int n,k,a[50],total_participants=0;
    cin>>n>>k;

    for ( int i = 0; i<n; i++ ) {
        cin>>a[i];
    }
    
    for ( int i = 0; i<n; i++ ) {
        if ( a[i] >= a[k-1] && a[i] > 0 ) {
            total_participants++;
        }
    }

    cout<<total_participants;

    return 0;
}