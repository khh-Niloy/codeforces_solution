/* 
Problem 10: 01 Game
Problem Link: https://codeforces.com/problemset/problem/1373/B
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    while ( n-- ) {
        string s;
        cin>>s;

        int count_0 = 0;
        int count_1 = 0;
        for ( int i = 0; i<s.length(); i++ ) {
            if (s[i] == '0') {
                count_0++;
            }
            else{
                count_1++;
            }
        }

        if ( min({count_0, count_1}) % 2 != 0 ) {
            cout<<"DA"<<endl;
        }
        else {
            cout<<"NET"<<endl;
        }
    
    }

    return 0;
}
