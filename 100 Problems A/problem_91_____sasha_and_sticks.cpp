/* 
Problem 91: Sasha and Sticks
Problem Link: https://codeforces.com/problemset/problem/832/A
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long n,k;
    cin>>n>>k;

    long long rem = 0;
    rem = n / k;

    if ( rem % 2 != 0 ) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}