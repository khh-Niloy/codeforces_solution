/* 
Problem 68: Bulbs
Problem Link: https://codeforces.com/problemset/problem/615/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n,m;
    cin>>n>>m;

    set<int>myset;
    for (int i = 0; i < n; i++) {
        int x;  
        cin >> x;

        for (int j = 0; j < x; j++) {
            int bulb;
            cin >> bulb;
            myset.insert(bulb);
        }
    }

    if ( myset.size() == m ) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}