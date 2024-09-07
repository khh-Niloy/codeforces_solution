/* 
Problem 83: Bit++
Problem Link: https://codeforces.com/problemset/problem/282/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;
    cin>>n;

    int x = 0;
    while(n--) {
        string s;
        cin>>s;
        
        if ( s[1] == '-' ) {
            x--;
        }
        else{
            x++;
        }
    }

    cout<<x;

    return 0;
}