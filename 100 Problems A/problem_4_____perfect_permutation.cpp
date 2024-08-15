/* 
Problem 4: Perfect Permutation
Problem Link: https://codeforces.com/problemset/problem/233/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<int>vec;
    for ( int i = 1; i<=n; i++ ) {
        vec.push_back(i);
    }

    if ( n % 2 == 0 ) {
        // int temp = 0;  method 1
        for ( int i = 0; i<n; i+=2 ) {
            if ( vec[i] < vec[i+1] ) {
                /* temp = vec[i+1];
                vec[i+1] = vec[i];
                vec[i] = temp; */
                swap(vec[i],vec[i+1]);  //method 2
            }
        }

        for ( auto i : vec ) {
            cout<<i<<" ";
        }
    }

    else {
        cout<<"-1";
    }
    
    return 0;
}