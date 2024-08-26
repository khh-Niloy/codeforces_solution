/* 
Problem 59: Free Ice Cream
Problem Link: https://codeforces.com/problemset/problem/686/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n,x;
    cin>>n>>x;

    long long stock = x, count = 0;
    while (n--) {
        char ch;
        int num;
        cin>>ch>>num;

        if ( ch == '-' ) {
            if ( stock >= num ) {
                stock-=num;
            }
            else{
                count++;
            }
        }
        else {
            stock+=num;
        }
    }

    cout<<stock<<" "<<count;

    return 0;
}