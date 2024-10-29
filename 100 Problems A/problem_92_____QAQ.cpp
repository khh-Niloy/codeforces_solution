/* 
Problem 92: QAQ
Problem Link: https://codeforces.com/contest/894/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {


    string s;
    cin>>s;

    int count_q = 0;
    for ( int i = 0; i<s.length(); i++ ) {
        if ( s[i] == 'Q' ) {
            count_q++;
        }
    }

    int sum = 0, right_side = 0, f = 0;

    for ( int i = 0; i<s.length(); i++  ) {
        if ( s[i] == 'Q') {
            sum++;
        }
        else if ( s[i] == 'A' &&  sum > 0) {
            right_side = abs(count_q - sum);
            f+=(sum*right_side);
        }
    }

    cout<<f;
    
    return 0;
}