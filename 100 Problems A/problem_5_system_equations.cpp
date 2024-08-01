#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int b,n,m;
    cin>>n>>m;

    int count = 0;

    for ( int a = 0; a<=1000; a++ ) {
        b = n - a*a;
        if ( b>=0 && b<=1000 && b*b + a == m ) {  //ensures (0 ≤ a, b)
            count++;
        }
    }
    cout<<count;

}