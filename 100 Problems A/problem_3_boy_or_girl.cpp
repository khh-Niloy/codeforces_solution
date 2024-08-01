#include <bits/stdc++.h>
using namespace std;

int main() {
    
    set<char> unique_char;
    string name;
    cin>>name;

    for ( int i = 0; i<name.length(); i++ ) {
        unique_char.insert(name[i]);
    }

    if (unique_char.size() % 2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else {
        cout<<"IGNORE HIM!"<<endl;
    }

}