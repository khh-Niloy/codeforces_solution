/* 
Problem 57: Cards
Problem Link: https://codeforces.com/problemset/problem/701/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<int>vec(n);
    vector<int>temp(n);
    for ( int i = 0; i<n; i++ ) {
        cin>>vec[i];
    }

    for ( int i = 0; i<n; i++  ) {
        temp[i] = vec[i];
    } 
    sort(temp.begin(), temp.end());

    for ( int i = 0; i<n/2; i++ ) {
        auto min = find(vec.begin(), vec.end(), temp[i]);
        int min_index = distance(vec.begin(), min);
        vec[min_index] = -1;

        auto max = find(vec.begin(), vec.end(), temp[n-i-1]);
        int max_index = distance(vec.begin(), max);
        vec[max_index] = -1;

        cout<<++min_index<<" "<<++max_index<<endl;
    }

    return 0;
}