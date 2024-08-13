/* 
Problem 38: Watermelon
Problem Link: https://codeforces.com/problemset/problem/4/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int w;
    cin>>w;

    bool checker = false;
    for ( int i = 1; i<w; i++ ) {
        if ( w % 2 == 0 && (w-i) % 2 == 0 ) {
            checker = true;
        }
    }

    if ( checker == true ) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    
    return 0;
}