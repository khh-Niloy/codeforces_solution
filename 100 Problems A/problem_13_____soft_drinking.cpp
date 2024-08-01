/*
Problem 13: Soft Drinking
Problem Link: https://codeforces.com/problemset/problem/151/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,k,l,c,d,p,nl,np,total_toast,total_salt,total_lime;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    total_toast = (k*l) / nl;
    total_salt = p/np;
    total_lime = c*d;

    vector<int>vec;
    vec.push_back(total_toast);
    vec.push_back(total_salt);
    vec.push_back(total_lime);

    int min_num = *min_element(vec.begin(), vec.end());

    /* 
    Or, simply, this can also be done by using the min function.
    int min_num = min({total_toast, total_salt, total_lime});
    */

    int each_friend = min_num / n;
    cout<<each_friend<<endl;

    return 0;
}