#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int n,a[1000];
    cin>>n;

    for ( int i = 0; i<n; i++ ) {
        cin>>a[i];
    }

    int min_count = 0, max_count = 0;
    int min = a[0], max = a[0];

    for ( int i = 1; i<n; i++ ) {
        
        if ( max < a[i] ) {
            max_count++;
            max = a[i];
        }

        if ( min > a[i] ) {
            min_count++;
            min = a[i];
        }
    }

    int total = max_count + min_count;

    cout<<total;

    return 0;
}