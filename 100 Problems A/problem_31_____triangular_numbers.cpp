/* 
Problem 31: Triangular numbers
Problem Link: https://codeforces.com/problemset/problem/47/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    float root_value = sqrt(8*n+1);

    if ( root_value == floor(root_value) ) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    
    return 0;
}