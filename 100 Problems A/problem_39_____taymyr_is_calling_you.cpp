/* 
Problem 39: Taymyr is calling you
Problem Link: https://codeforces.com/problemset/problem/764/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,m,z;
    cin>>n>>m>>z;

    vector<int> n_vec, m_vec;

    for ( int i = n; i<=z; i+=n) {
        n_vec.push_back(i);
    }

    for ( int i = m; i<=z; i+=m) {
        m_vec.push_back(i);
    }

    int matched = 0;
    for ( int i = 0; i<n_vec.size(); i++ ) {
        for ( int j = 0; j<m_vec.size(); j++ ) {
            if ( n_vec[i] == m_vec[j] ) {
                matched++;
            }
        }
    }

    cout<<matched;

    return 0;
}