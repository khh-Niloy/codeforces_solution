/*
Problem 23: Blackjack
Problem Link: https://codeforces.com/problemset/problem/104/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int n;
    cin>>n;

    int point = n-10;

    int sum = 0;
    if (point >= 2 && point <= 9) {
        sum+=4;
    }
    else if (point == 10) {
        sum+=15;
    }
    else if ( point == 1 || point == 11 ) {
        sum+=4;
    }

    cout<<sum;


    return 0;
}