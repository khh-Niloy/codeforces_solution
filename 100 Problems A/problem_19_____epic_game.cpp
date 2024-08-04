/*
Problem 19: Epic Game
Problem Link: https://codeforces.com/contest/119/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int main() {
    
    int a,b,n;
    cin>>a>>b>>n;

    int stone,remaining_stone,turn = 0;
    remaining_stone = n;
    
    while ( remaining_stone != 0 ) {
        turn++;
        if ( turn % 2 != 0 ) {
            stone = gcd(a,remaining_stone);
        }
        else {
            stone = gcd(b,remaining_stone);
        }
        remaining_stone -= stone;
    }

    if ( turn % 2 != 0 ) {
        cout<<"0";
    }
    else {
        cout<<"1";
    }

    return 0;
}
