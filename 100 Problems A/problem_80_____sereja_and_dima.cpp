/* 
Problem 80: Sereja and Dima
Problem Link: https://codeforces.com/contest/381/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;
    cin>>n;
 
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    int turn = 0, n1=0, n2=0;
    while(!vec.empty()){
        if ( vec.front() > vec.back() ) {
            if ( turn % 2 == 0 ) {
                n1+=vec.front();
            }
            else if ( turn % 2 != 0 ) {
                n2+=vec.front();
            }
            vec.erase(vec.begin());
        }
        else {
            if ( turn % 2 == 0 ) {
                n1+=vec.back();
            }
            else if ( turn % 2 != 0 ) {
                n2+=vec.back();
            }
            vec.pop_back();
        }
        turn++;
    }


    cout<<n1<<" "<<n2;
    
 
 
    return 0;
}