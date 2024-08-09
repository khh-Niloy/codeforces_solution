/*
Problem 24: Chips
Problem Link: https://codeforces.com/problemset/problem/92/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int n, m;
    cin>>n>>m;

    int remaining = m;
    int checker = remaining;
    int i = 1; // for iterating from position 1 to n
    int lastRemainingChips = 0; // to store the last number of remaining chips

    while (checker >= 0) {
        
        for (int i = 1; i <= n; i++) {
            if (remaining >= i) { // checks if it is possible to give chips to the next position
                remaining = remaining - i; // subtracting chips based on position
                checker = remaining;
            } else {
                lastRemainingChips = remaining; // storing the last remaining number of chips
                checker = -1; // this stops the while loop
            }
        }
    }

    cout<<lastRemainingChips;
    
    return 0;
}