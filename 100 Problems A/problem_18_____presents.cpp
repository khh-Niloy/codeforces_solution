/*
Problem 18: Presents
Problem Link: https://codeforces.com/problemset/problem/136/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    map<int, string>map;
    for ( int i = 0; i<n; i++ ) {
        int key;
        cin>>key;
        string value = to_string(i+1);

        map[key] = value; 
    }

    for ( const auto& pair : map ) {
        cout<<pair.second<<" ";
    }


    return 0;
}

/* 
Note:

Prevents modification of elements (const).
Allows the compiler to deduce the correct type (auto).
Avoids unnecessary copying by using references (&).
*/