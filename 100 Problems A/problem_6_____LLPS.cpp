/*
Problem 6: LLPS
Problem Link: https://codeforces.com/problemset/problem/202/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
 
    string s;
    cin>>s;
    
    for ( char &c : s ) {
        c = tolower(c);
    }

    set<char> unique_char(s.begin(), s.end());

    string new_arr(unique_char.begin(), unique_char.end());

    char largest_letter = *max_element(new_arr.begin(), new_arr.end());

    int total_occurance = count(s.begin(), s.end() , largest_letter);
    
    for ( int i = 0; i<total_occurance; i++ ) {
        cout<<largest_letter;
    }

    return 0;
}


/*Note:

1. max_element -> Return the maximum element in a range.
It effectively uses ASCII values when comparing characters.

2. count -> Count the number of copies of a value in a sequence.
*/