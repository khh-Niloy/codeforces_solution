/* 
Problem 48: Night at the Museum
Problem Link: https://codeforces.com/problemset/problem/731/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin>>s;
    int length = s.size();
    
    //initial
    int clock_wise = 0, anticlock_wise = 0, sum = 0, min_steps;
    
    clock_wise = ('a' - s[0] + 26) % 26;
    anticlock_wise = (s[0] - 'a' + 26) % 26;
    min_steps = min(clock_wise, anticlock_wise);    //initial
    sum+=min_steps;

    for ( int i = 0; i<length-1; i++ ) {
        clock_wise = (s[i+1] - s[i] + 26) % 26;
        anticlock_wise = (s[i] - s[i+1] + 26) % 26;

        min_steps = min(clock_wise, anticlock_wise);
        sum+=min_steps;
    }

    cout<<sum;

    return 0;
}