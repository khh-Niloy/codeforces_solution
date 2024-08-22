/* 
Problem 54: Hulk
Problem Link: https://codeforces.com/problemset/problem/705/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    string a = "I hate", b = "I love";
    string temp;

    int i = 1;
    while ( i<=n ) {

        if (i>1) {
            temp += " that ";
        }

        if ( i % 2 != 0 ) {
            temp += a;
        }
        else if (i % 2 == 0) {
            temp += b;
        }
        i++;
    }

    cout<<temp<<" it";

    return 0;
}