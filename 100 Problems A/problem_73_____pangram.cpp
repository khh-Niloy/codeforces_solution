/* 
Problem 73: Pangram
Problem Link: https://codeforces.com/problemset/problem/520/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;
    string s;
    cin>>n>>s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    set<char>mySet;
    for ( int i = 0; i<s.length(); i++ ) {
        mySet.insert(s[i]);
    }

    if ( mySet.size() >= 26 ) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }


    return 0;
}