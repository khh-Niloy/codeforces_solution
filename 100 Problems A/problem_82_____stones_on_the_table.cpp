/* 
Problem 82: Stones on the Table
Problem Link: https://codeforces.com/problemset/problem/266/A
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {


    int n;
    cin>>n;
    char a[n];

    for( int i = 0; i<n; i++ ){
        cin>>a[i];
    }

    int count = 0;
    for ( int i = 0; i<n-1; i++ ){
        if( a[i] == a[i+1] ){
            count++;
        }
    }

    cout<<count;
    
    return 0;
}