/* 
Problem 6: Honest Coach
Problem Link: https://codeforces.com/problemset/problem/1360/B
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int time;
    cin>>time;

    while (time--) {
        int n;
    cin>>n;

    vector<int>vec;
    for ( int i = 0; i<n; i++ ) {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());

   int min = INT_MAX;
    for ( int i = 1; i<n; i++  ) {
        if ( min > abs(vec[i]-vec[i-1]) ) {
            min = abs(vec[i]-vec[i-1]);
        }
    }
    cout<<min<<endl;
    }


    return 0;
}