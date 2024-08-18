/* 
Problem 47: Buy a Shovel
Problem Link: https://codeforces.com/problemset/problem/732/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int k,r;
    cin>>k>>r;

    int i = 1;
    while (1) {
        int total_price = k * i;
        if (total_price % 10 == 0 || total_price % 10 == r) {
            cout<<i;
            break;
        }
        i++;
    }

    return 0;
}