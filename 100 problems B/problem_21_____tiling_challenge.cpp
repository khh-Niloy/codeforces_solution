/* 
Problem 21: Tiling Challenge
Problem Link: https://codeforces.com/problemset/problem/1150/B
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;
    cin>>n;
    char a[n][n];
 
    int count = 0;
    for ( int i = 0; i<n; i++ ) {
        for ( int j = 0; j<n; j++ ) {
            cin>>a[i][j];
            count++;
        }
    }
 
    int mid_index = 0;
    for ( int i = 0; i<n-1; i++ ) {
        for ( int j = 1; j<n-1; j++ ) {
            if(a[i][j]=='.' && a[i+1][j] == '.' && a[i+2][j]=='.'
                  && a[i+1][j-1] == '.' && a[i+1][j+1] == '.'){
                    a[i][j] = '#';
                    a[i+1][j] = '#';
                    a[i+1][j-1] = '#';
                    a[i+1][j+1] = '#';
                    a[i+2][j] = '#';
                }
        }
    }
 
    int count_dot = 0;
    for ( int i = 0; i<n; i++ ) {
        for ( int j = 0; j<n; j++ ) {
            if (a[i][j] == '#'){
                count_dot++;
            }
        }
    }
 
    if ( count_dot == count ) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
 
    return 0;
}