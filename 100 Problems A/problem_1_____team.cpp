/*
Problem 1: Team
Problem Link: https://codeforces.com/problemset/problem/231/A
*/

#include <iostream>
using namespace std;
int main() {
    
    int n, passed_tests=0;
    cin>>n;
    
    while(n--){
        
        int a,b,c;
        cin>>a>>b>>c;
        if (a+b+c >=2){
            passed_tests++;
        }
    }
    
    cout<<passed_tests;
 
    return 0;
}