#include <iostream>
#include <set>
using namespace std;

int main() {
    
    set<int> unique_number_set;
    // set stores unique elements.
    
    for ( int i = 0; i<4; i++ ) {
        int color_input;
        cin>>color_input;
        
        unique_number_set.insert(color_input);
    }
    
    int need_to_buy = 4 - unique_number_set.size(); //calculating total duplicates
    cout<<need_to_buy;

    return 0;
}


/*
This can also be done in another way

int color_input[4];
    int need_to_buy = 0;
    
    for ( int i = 0; i<4; i++ ) {
        cin>>color_input[i];    
    }
    
    for ( int i = 0; i<4; i++ ) {
        int duplicate = 0;
        for ( int j = i+1; j<4; j++ ) {
            if (color_input[i]==color_input[j]) {
                duplicate++;
            }
        }
         if (duplicate>0) {
            need_to_buy++;
        }
    }
    
cout<<need_to_buy;
*/