/* 
Problem 72: Soldier and Bananas
Problem Link: https://codeforces.com/problemset/problem/546/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int k,n,w;
    cin>>k>>n>>w;

    int sum = 0, res = 1;
    for ( int i = 1; i<=w; i++ ) {
        res=i*k;
        sum+=res;
    }

    if ( sum > n ) {
        cout<<sum-n;
    }
    else {
        cout<<"0";
    }

    return 0;
}