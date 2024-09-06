/* 
Problem 78: Black Square
Problem Link: https://codeforces.com/problemset/problem/431/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int a[4];
    for ( int i = 0; i<4; i++ ) {
        cin>>a[i];
    }

    string s;
    cin>>s;

    int sum = 0;
    for ( int i = 0; i<s.length(); i++ ) {
        int num = s[i] - '0';   // char to int
        sum+=a[num-1];
    }

    cout<<sum;

    return 0;
}