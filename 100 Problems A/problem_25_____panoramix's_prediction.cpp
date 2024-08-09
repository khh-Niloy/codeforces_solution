/*
Problem 25: Panoramix's Prediction
Problem Link: https://codeforces.com/problemset/problem/80/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int n,m;
    cin>>n>>m;

    vector<int>vec;

    for ( int i = n; i <= m; i++ ) {
        int isPrime = 0;
        for ( int j = 2; j<i; j++ ) {
            if ( i % j == 0 ) {
                isPrime = -1; //not prime
                break;
            }
        }
        if ( isPrime == 0 ) {
            vec.push_back(i);
        }
    }

    if ( vec[1] == m ) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}