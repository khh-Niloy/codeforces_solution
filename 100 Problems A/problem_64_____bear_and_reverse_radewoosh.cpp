/* 
Problem 64: Bear and Reverse Radewoosh
Problem Link: https://codeforces.com/problemset/problem/658/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n,c;
    cin>>n>>c;

    int p[n],t[n];
    for ( int i = 0; i<n; i++ ) {
        cin>>p[i];
    }
    for ( int i = 0; i<n; i++ ) {
        cin>>t[i];
    }

    int point_1 = 0, sum1 = 0;
    for ( int i = 0; i<n; i++ ) {
        sum1+=t[i];
        if ( (p[i] - c * sum1) > 0 ) {
        point_1 += (p[i] - c * sum1);
        }
    }

    int point_2 = 0, sum2 = 0;
    for ( int i = n-1; i>=0; i-- ) {
        sum2+=t[i];
        if ( (p[i] - c * sum2) > 0 ) {
        point_2 += (p[i] - c * sum2);
        }
    }
    
    if ( point_1 > point_2 ) {
        cout<<"Limak";
    }
    else if ( point_1 < point_2 ) {
        cout<<"Radewoosh";
    }
    else {
        cout<<"Tie";
    }


    

    return 0;
}