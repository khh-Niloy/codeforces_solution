/* 
Problem 79: Police Recruits
Problem Link: https://codeforces.com/problemset/problem/427/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;
    cin>>n;

    int a[n];
    for ( int i = 0; i<n; i++ ) {
        cin>>a[i];
    }

    int store = 0, sum = 0;

    for ( int i = 0; i<n; i++ ) {
        if ( a[i]>0 ) {
            store += a[i];
        }
        else{
            if ( store == 0 ) {
                sum++;
            }
            else {
                store+=a[i];
            }
        }
    }

    cout<<sum;


    return 0;
}