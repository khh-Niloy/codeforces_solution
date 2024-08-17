/* 
Problem 44: Compote
Problem Link: https://codeforces.com/problemset/problem/746/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int a,b,c;
    cin>>a>>b>>c;

    int min_num =  min({a / 1, b / 2, c / 4});
    int total = min_num * (1+2+4);
    cout<<total;

    return 0;
}

/* 
another way

int sum=0,i=1;
while ( i<=a ) {
    int x=1,y=2,z=4;
    x = x * i;
    y = y * i;
    z = z * i;

    if ( x > a || y > b || z > c ) {
        i = a+1;
    }
    else{
    sum = x+y+z;
    i++;
    }
}
*/