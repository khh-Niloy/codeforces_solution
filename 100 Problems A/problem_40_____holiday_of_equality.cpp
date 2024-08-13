/* 
Problem 40: Holiday Of Equality
Problem Link: https://codeforces.com/problemset/problem/758/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,maxValue,total;
    cin>>n;

    vector<int>vec;
    for ( int i = 0; i<n; i++ ) {
        int x;
        cin>>x;
        vec.push_back(x);
    }

    maxValue = *max_element(vec.begin(), vec.end());
    total = 0;
    for ( int i = 0; i<vec.size(); i++ ) {
        total += (maxValue-vec[i]);
    }

    cout<<total;

    return 0;
}