/* 
Problem 90: Anton and Polyhedrons
Problem Link: https://codeforces.com/problemset/problem/785/A
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    int sum = 0;
    while(n--){
        string s;
        cin>>s;

        if ( s == "Tetrahedron" ) {
            sum+=4;
        }
        if ( s == "Cube" ) {
            sum+=6;
        }
        if ( s == "Octahedron" ) {
            sum+=8;
        }
        if ( s == "Dodecahedron" ) {
            sum+=12;
        }
        if ( s == "Icosahedron" ) {
            sum+=20;
        }
    }

    cout<<sum;

    return 0;
}