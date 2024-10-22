/* 
Problem 88: Find Extra One
Problem Link: https://codeforces.com/problemset/problem/900/A
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;
    cin>>n;

    int x_r=0, x_l=0;
    while(n--){
        int x, y;
        cin>>x>>y;

        if ( x < 0  ) {
            x_l++;
        }
        else{
            x_r++;
        }
    }

    if ( (x_l == 1 || x_r == 1) || (x_l == 0 || x_r == 0) ) {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    
 
 
    return 0;
}