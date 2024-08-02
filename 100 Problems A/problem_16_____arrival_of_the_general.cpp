/*
Problem 16: Arrival of the General
Problem Link: https://codeforces.com/contest/144/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int n;
    cin>>n;

    vector<int>vec;
    for ( int i = 0; i<n; i++ ) {
        int x;
        cin>>x;
        vec.push_back(x);     
    }

    auto max_it = max_element(vec.begin(), vec.end());
    int max_index = distance(vec.begin(), max_it);

    auto min_it = min_element(vec.rbegin(), vec.rend());    //reverse iteration
    auto normal_it = min_it.base();
    int min_index = distance(vec.begin(), normal_it) - 1;

    int max_to_first = max_index;
    int min_to_last = (n-1) - min_index;

    if ( max_index > min_index ) {
        min_to_last--;
    }
   
    int total = max_to_first + min_to_last;
    cout<<total;
    

    return 0;
}


/*
    Left and right moves can also be done with this logic ->

    int left = 0;
    for ( int i = max_element_index; i>0; i-- ) {
        int temp = 0;

        if ( vec[i] > vec[i-1] ) {
            left++;
            temp = vec[i-1];
            vec[i-1] = vec[i];
            vec[i] = temp;
        }
    }

    int right = 0;
    for ( int i = min_element_index; i<n-1; i++ ) {
        int temp = 0;

        if ( vec[i] < vec[i+1] ) {
            right++;
            temp = vec[i+1];
            vec[i+1] = vec[i];
            vec[i] = temp;
        }
    }

    int total = left + right;
    cout<<total; 

*/

