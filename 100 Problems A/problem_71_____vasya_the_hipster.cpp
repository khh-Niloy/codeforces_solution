/* 
Problem 71: Vasya the Hipster
Problem Link: https://codeforces.com/problemset/problem/581/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int r,b;
    cin>>r>>b;

    int max_day = min({r,b});
    int max_same_day = abs(r-b)/2;

    cout<<max_day<<" "<<max_same_day;

    return 0;
}