/* 
Problem 55: Mishka and Game
Problem Link: https://codeforces.com/problemset/problem/703/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    string result;

    int i = 0, c = 0, m = 0;
    while ( i!=n ) {
        int a,b;
        cin>>a>>b;

        if ( a < b ) {
            c++;
        }
        else if ( a > b ) {
            m++;
        }
        i++;
    }

    if ( c > m ) {
        cout<<"Chris";
    }
    else if ( c < m ) {
        cout<<"Mishka";
    }
    else {
        cout<<"Friendship is magic!^^";
    }

    cout<<result;

    return 0;
}