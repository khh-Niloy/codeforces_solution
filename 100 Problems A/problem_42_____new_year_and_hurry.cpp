/* 
Problem 42: New Year and Hurry
Problem Link: https://codeforces.com/problemset/problem/750/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,k;
    cin>>n>>k;

    int remaining_time = 240-k;

    int problem_time = 0, solved = 0, sum = 0;
    for ( int i = 1; i<=n; i++ ) {
        sum+=5;
        problem_time+=sum;
        if ( problem_time <= remaining_time ) {
            solved++;
        }
        else {
            break;
        }
    }
    cout<<solved;

    return 0;
}