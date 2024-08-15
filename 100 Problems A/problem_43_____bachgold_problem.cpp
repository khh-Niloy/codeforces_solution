/* 
Problem 43: Bachgold Problem
Problem Link: https://codeforces.com/problemset/problem/749/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    int res,res2;
    if ( n % 2 == 0 ) {
        res = n/2;
        cout<<res<<endl;

        for ( int i = 1; i<=res; i++ ) {
            cout<<2<<" ";
        }
    }

    else {
        res = n - 3;
        res2 = res/2;
        int total_number = res2+1; 
        cout<<total_number<<endl;

        for ( int i = 1; i<=res2; i++ ) {
            cout<<2<<" ";
        }
        cout<<3;
        
    }

    return 0;
}