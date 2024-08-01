/*
Problem 15: Lucky Ticket
Problem Link: https://codeforces.com/contest/146/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int n;
    char ch;
    vector<int>vec;

    cin>>n;
    for ( int i = 0; i<n; i++ ) {
        cin>>ch;
        vec.push_back(ch-'0');
    }

    int left_sum = 0, right_sum = 0;
    
    bool check_1 = true;
    for ( int i = 0; i<vec.size(); i++ ) {
        if ( vec[i] != 4 && vec[i] != 7) {
            check_1 = false;
            break;
        }

        if ( i < n/2 ) {
            left_sum += vec[i];
        }
        else {
            right_sum += vec[i];
        }
    }

    /* for more clarity
    for ( int i = 0; i<n/2; i++ ) {
        left_sum += vec[i];     calculating left half sum
    }

    for ( int i = n/2; i<n; i++ ) {
        right_sum += vec[i];    calculating right half sum
    } 
    */

    if ( check_1 == true && right_sum == left_sum ) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

    return 0;
}