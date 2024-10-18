/* 
Problem 89: Bear and Big Brother
Problem Link: https://codeforces.com/problemset/problem/791/A
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a,b;
    cin>>a>>b;

    int count = 0;

     while(a<=b){
        a = a*3;
        b = b*2;
        count++;
    } 

    cout<<count;

    return 0;
}