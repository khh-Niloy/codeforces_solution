/*
Problem 20: Tram
Problem Link: https://codeforces.com/problemset/problem/116/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,max=0,remaining=0;
    cin>>n;

    for (int i = 0; i<n; i++) {
        int a,b;
        cin>>a>>b;

        remaining = remaining - a + b;
        if(max<remaining){
            max = remaining;
        }
    }

    cout<<max;

    return 0;
}

/* 
This can also be done in another way, using array

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    int a[n][2];

    for (int i = 0; i<n; i++) {
        for ( int j = 0; j<2; j++ ) {
            cin>>a[i][j];
        }
    }

    int temp=0,max=0,remaining=0;
    for (int i = 0; i<n; i++) {
        int sum = 0;

        for (int j = 0; j<2; j++){
            sum+=a[i][j];
        }

            if ( i == 0 ) {
                temp = sum;
                max = temp;
            }
            else{
                remaining = (temp-a[i][0])+a[i][1];

                if(max<remaining){
                max = remaining;
                }
                temp = remaining;
            }
    }

    cout<<max;

    return 0;
}
 */