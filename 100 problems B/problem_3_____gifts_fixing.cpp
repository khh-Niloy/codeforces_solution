/* 
Problem 3: Gifts Fixing
Problem Link: https://codeforces.com/problemset/problem/1399/B
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        vector<int> candies(n), oranges(n);

        for (int i = 0; i < n; ++i) {
            cin >> candies[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> oranges[i];
        }

        long long min_candies = *min_element(candies.begin(), candies.end());
        long long min_oranges = *min_element(oranges.begin(), oranges.end());

        long long move = 0;
    
        for ( int i = 0; i<n; i++ ) {
            long long cand =  abs(min_candies - candies[i]);
            long long oran = abs(min_oranges - oranges[i]); 

            long long max_diff = max(cand, oran);
            move+=max_diff;
        }

        cout<<move<<endl;
    }

    return 0;
}