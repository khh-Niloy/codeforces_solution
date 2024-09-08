/* 
Problem 85: Helpful Maths
Problem Link: https://codeforces.com/problemset/problem/339/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    string s;
    cin>>s;
    
    vector<int>vec;

    for ( int i = 0; i<s.length(); i++ ) {
        if ( i % 2 == 0 ) {
            vec.push_back(s[i]-'0');
        }
    }

    sort(vec.begin(), vec.end());
    
    for ( int i = 0; i<vec.size(); i++ ) {
        if ( i<vec.size()-1 ) {
            cout<<vec[i]<<"+";
        }
        else {
            cout<<vec[i];
        }
    }

    return 0;
}