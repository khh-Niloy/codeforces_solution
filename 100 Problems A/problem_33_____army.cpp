/* 
Problem 33: Army
Problem Link: https://codeforces.com/problemset/problem/38/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,d[100],a,b;
    cin>>n;
    for ( int i = 0; i<n-1; i++ ) {
        cin>>d[i];
    }
    cin>>a>>b;

    int total_years = 0;
    for ( int i = a-1; i<b-1; i++ ) {
        total_years+=d[i];
    }

    cout<<total_years;  

    return 0;
}