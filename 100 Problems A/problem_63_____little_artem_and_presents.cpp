/* 
Problem 63: Little Artem and Presents
Problem Link: https://codeforces.com/problemset/problem/669/A
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    int p=n,q;
    int count = 0;
    while(p>0 && q>0) {
        p = p - 2;
        count++;
        if ( p <= 0 ) {
            break;
        }
        q = p - 1;
        count++;
        if ( q <= 0 ) {
            break;
        }
        p = q;
    }

    cout<<count;

    return 0;
}