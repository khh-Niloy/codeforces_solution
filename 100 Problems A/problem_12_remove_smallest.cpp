#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int main_input;
    cin>>main_input;
    
    while(main_input--){

        int n;
        cin>>n;
    
        vector<int>vec;
        for ( int i = 0; i<n; i++ ) {
            int vec_input;
            cin>>vec_input;
            vec.push_back(vec_input);
        }
        sort(vec.begin(), vec.end(), greater<int>());
    
        bool check = true;
        for ( int i = 0; i<n-1; i++ ) {
            if ( (vec[i] - vec[i+1]) > 1 ) {
                check = false;
            }
        }
    
        if (check) {
            cout<<"YES"<<endl;
        }
        else if (check == false) {
            cout<<"NO"<<endl;
        }
    
    }

        

    return 0;
}


/* 
Note:
Vectors are more optimized and flexible since they dynamically adjust their size based on the input,
but you can achieve similar functionality using arrays.

Using array:

#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int main_input;
    cin>>main_input;
    
    while(main_input--){

        int n, a[100];
        cin>>n;

        for ( int i = 0; i<n; i++ ) {
            cin>>a[i];
        }
        sort(a, a+n, greater<int>());
    
        bool check = true;
        for ( int i = 0; i<n-1; i++ ) {
            if ( (a[i] - a[i+1]) > 1 ) {
                check = false;
            }
        }
    
        if (check) {
            cout<<"YES"<<endl;
        }
        else if (check == false) {
            cout<<"NO"<<endl;
        }
    
    }

        

    return 0;
}
 */
