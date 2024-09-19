/* 
Problem 11: Square?
Problem Link: https://codeforces.com/problemset/problem/1351/B
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    while ( n-- ) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int x1 = max(a,b);
        int y1 = min(a,b);
        int x2 = max(c,d);
        int y2 = min(c,d);

        if ( y1+y2 == x1 && y1+y2 == x2 ) { 
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    

    return 0;
}
