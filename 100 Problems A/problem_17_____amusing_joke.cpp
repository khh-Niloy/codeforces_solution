/*
Problem 17: Amusing Joke
Problem Link: https://codeforces.com/contest/141/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    string combined_string = s1+s2;

    sort(combined_string.begin(), combined_string.end());
    sort(s3.begin(), s3.end());

    if ( combined_string == s3 ) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

    return 0;
}

/* 
Note:
Sorting puts characters in a predictable order, allowing a straightforward comparison.
*/