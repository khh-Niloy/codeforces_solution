/* 
Problem 56: Opponents
Problem Link: https://codeforces.com/problemset/problem/702/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    cin>>n;
 
    vector<int>vec(n);
    for ( int i = 0; i<n; i++ ) {
        cin>>vec[i];
    }
 
    int length = 1, max = 1;
    for ( int i = 0; i<n-1; i++ ) {
        if ( vec[i+1] > vec[i] ) {
            length++;
            if (max<length){
                max = length;
            }
        }
        else {
            length = 1;
        }
    }
 
    cout<<max;
 
    return 0;
}