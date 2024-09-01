/* 
Problem 76: Anton and Letters
Problem Link: https://codeforces.com/problemset/problem/443/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    string s;
    getline(cin,s);

    set<char>myset;

    int count = 0;
    for ( int i = 1; i<s.length()-1; i+=3 ) {
        myset.insert(s[i]);
    }

    cout<<myset.size();

    return 0;
}