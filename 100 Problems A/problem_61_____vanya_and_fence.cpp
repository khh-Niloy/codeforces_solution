/* 
Problem 61: Vanya and Fence
Problem Link: https://codeforces.com/contest/677/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n,h;
    cin>>n>>h;
    int a[n];
    for ( int i = 0; i<n; i++ ) {
        cin>>a[i];
    }

    int sum = 0;
    for ( int i = 0; i<n; i++ ) {
        if ( a[i] > h ) {
            sum+=2;
        }
        else {
            sum++;
        }
    }

    cout<<sum;

    

    return 0;
}