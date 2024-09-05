/* 
Problem 74: Fox And Snake
Problem Link: https://codeforces.com/problemset/problem/510/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int a,b;
    cin>>a>>b;

    int count = 0;
    for ( int i = 1; i<=a; i++ ) {

        if ( i % 2 != 0 ) {
            for ( int j = 1; j<=b; j++ ) {
                cout<<"#";
            }
        }

        else {
            count++;

            if ( count % 2 != 0 ) {
                for ( int j = 1; j<=b; j++ ) {
                    if ( j < b  ) {
                        cout<<".";
                    }
                    else {
                        cout<<"#";
                    }
                }
            }

            else {
                for ( int j = 1; j<=b; j++ ) {
                    if ( j == 1  ) {
                        cout<<"#";
                    }
                    else {
                        cout<<".";
                    }
                }
            }
        }

        cout<<endl;
    }

    return 0;
}