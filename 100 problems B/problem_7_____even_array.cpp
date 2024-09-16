/* 
Problem 7: Even Array
Problem Link: https://codeforces.com/contest/1367/problem/B
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        vector<int>vec(n);
        for (int i=0; i<n; i++) {
            cin >> vec[i];
        }

        int even_miss = 0, odd_miss = 0;
        for ( int i = 0; i<n; i++ ) {
            if ( i % 2 == 0 && vec[i] % 2 != 0 ) {
                even_miss++;
            }
            else if ( i % 2 != 0 && vec[i] % 2 == 0 ) {
                odd_miss++;
            }
       }

        if ( even_miss != odd_miss ) {
           cout<<"-1"<<endl;
       }
       else {
           cout<<even_miss<<endl;
        }
    }
    
    return 0;
}
