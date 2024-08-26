/* 
Problem 60: A Good Contest
Problem Link: https://codeforces.com/contest/681/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    cin>>n;

    string result;
    int win = 0;
    while (n--) {
        string s;
        cin>>s;
        int b,a;
        cin>>b>>a;

        if ( b>=2400 && a > b ) {
            win++;
        }
    }

    if ( win>0 ) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    

    return 0;
}