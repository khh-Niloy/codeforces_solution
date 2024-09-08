/* 
Problem 2: Anton and Digits
Problem Link: https://codeforces.com/problemset/problem/734/B
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int a[4];
    for ( int i = 0; i<4; i++ ) {
        cin>>a[i];
    }

    int min_value_256 = min({a[0], a[2], a[3]});
    int remainig_2 = a[0] - min_value_256;

    int min_value_32 = 0;
    if ( remainig_2 > 0 ) {
        min_value_32 = min({remainig_2, a[1]});
    }

    int total = min_value_256*256 + min_value_32*32;
    cout<<total;

    return 0;
}