/* 
Problem 34: Reconnaissance 2
Problem Link: https://codeforces.com/problemset/problem/34/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,x,y,min;
    cin>>n;
    vector<int>vec;
    for ( int i = 0; i<n; i++ ) {
        int x;
        cin>>x;
        vec.push_back(x);
    }

    min = abs(vec[n-1] - vec[0]);
    x=n,y=1; //default value for pair position

    for ( int i = 0; i<vec.size(); i++ ) {
        int carry = 0;
        carry = abs(vec[i] - vec[i+1]);

        if ( min > carry ) {
            min = carry;
            x = i+1;
            y = x+1;
        }
    }
    cout<<x<<" "<<y;
    
    return 0;
}