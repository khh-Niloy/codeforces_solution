/*
Problem 29: Domino piling
Problem Link: https://codeforces.com/problemset/problem/50/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int a,b;
    cin>>a>>b;

    int area = a*b;
    int max_num_dominoes = area / 2;
    cout<<max_num_dominoes;

    return 0;
}