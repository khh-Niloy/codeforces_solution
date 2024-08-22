/* 
Problem 51: Crazy Computer
Problem Link: https://codeforces.com/problemset/problem/716/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,c;
    cin>>n>>c;

    vector<int>vec(n);
    for ( int i = 0; i<n; i++ ) {
        cin>>vec[i];
    }

    int count = 0;
    for ( int i = 0; i<n-1; i++ ) {
        if ( vec[i+1] - vec[i] > c ) {
            count=0;
        }
        else {
            count++;
        }
    }
    count+=1;
    cout<<count;
    
    return 0;
}