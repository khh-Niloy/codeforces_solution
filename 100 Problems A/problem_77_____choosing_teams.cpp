/* 
Problem 77: Choosing Teams
Problem Link: https://codeforces.com/problemset/problem/432/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n,k;
    cin>>n>>k;

    int a[n];
    for ( int i = 0; i<n; i++ ) {
        cin>>a[i];
    }

    int member_count = 0;
    for ( int i = 0; i<n; i++ ) {
        if ( a[i]+k <= 5 ) {
            member_count++;
        }
    }

    cout<<member_count/3;

    return 0;
}