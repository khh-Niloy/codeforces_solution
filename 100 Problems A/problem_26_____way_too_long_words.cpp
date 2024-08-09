/*
Problem 26: Way Too Long Words
Problem Link: https://codeforces.com/problemset/problem/71/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    while (n--) {
        string s;
        cin>>s;

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int string_length = s.length();

        if ( string_length > 10 ) {
            int remaining_words = string_length-2;
            cout<<s[0]<<remaining_words<<s[string_length-1]<<endl;
        }
        else {
            cout<<s<<endl;
        }
    }

    return 0;
}