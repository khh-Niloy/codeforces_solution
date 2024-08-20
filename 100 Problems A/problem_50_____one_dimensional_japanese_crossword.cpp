/* 
Problem 50: One-dimensional Japanese Crossword
Problem Link: https://codeforces.com/problemset/problem/721/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<int>vec;
    vector<int>group;
    int sum=0;

    for ( int i = 0; i<n; i++ ) {
        if ( s[i] == 'B' ) {
            sum++;
        }
        else if (s[i] == 'W') {
            if ( sum > 0 ) {
                vec.push_back(sum);
                group.push_back(1);
            }
            sum = 0;
        }

    }

    if ( s[n-1] == 'B' ) {
        vec.push_back(sum);
        group.push_back(1);
    }

    cout<<group.size()<<endl;
    for ( auto i : vec ) {
        cout<<i<<" ";
    }
    
    return 0;
}