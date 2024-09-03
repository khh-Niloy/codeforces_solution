/* 
Problem 1: Drinks
Problem Link: https://codeforces.com/problemset/problem/200/B
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;
    cin>>n;

    int i = n;
    double sum = 0;
    while (i--) {
        int x;
        cin>>x;
        sum+=x;
    }

    double total = sum / n;
    cout<<fixed<<setprecision(12)<<total;

    return 0;
}