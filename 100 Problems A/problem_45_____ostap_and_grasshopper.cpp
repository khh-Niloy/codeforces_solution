/* 
Problem 45: Ostap and Grasshopper
Problem Link: https://codeforces.com/problemset/problem/735/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int G_pos = 0, T_pos = 0;
    for ( int i = 0; i<s.length(); i++ ) {
        if ( s[i] == 'T' ) {
            T_pos = i;
        }
        else if ( s[i] == 'G' ) {
            G_pos = i;
        }
    }
    

    int i = G_pos;
    if (T_pos > G_pos) {
    while (i <= T_pos) {
        if (s[i] == 'T') {
            cout << "YES";
            break;
        } else if (s[i] == '#') {
            cout << "NO";
            break;
        }
        i += k;

        if (i > T_pos) {
            cout << "NO";
            break;
        }
    }
    }
    
    else if (T_pos < G_pos) {
    while (i >= T_pos) {
        if (s[i] == 'T') {
            cout << "YES";
            break;
        } else if (s[i] == '#') {
            cout << "NO";
            break;
        }
        i -= k;

        if (i < T_pos) {
            cout << "NO";
            break;
        }
    }
}

    return 0;
}