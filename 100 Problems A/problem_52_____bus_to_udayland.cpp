/* 
Problem 52: Bus to Udayland
Problem Link: https://codeforces.com/problemset/problem/711/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<string>bus(n);
    for ( int i = 0; i<n; i++ ) {
        cin >> bus[i];
    }

    bool check = false; 
    for ( int i = 0; i<n; i++ ) {
        if ( (bus[i][0] == 'O' && bus[i][1] == 'O') ) {
            check = true;
            bus[i][0] = '+';
            bus[i][1] = '+';
            break;
        }
        else if ( (bus[i][3] == 'O' && bus[i][4] == 'O') ) {
            check = true;
            bus[i][3] = '+';
            bus[i][4] = '+';
            break;
        }  
    }

    if ( check == true ) {
        cout<<"YES"<<endl;

        for ( auto i : bus ) {
            cout<<i<<endl;
        }
    }
    else{
        cout<<"NO";
    }

    return 0;
}