/*
Problem 7: Series of Crimes
Problem Link: https://codeforces.com/problemset/problem/181/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int row,col;
    cin>>row>>col;

    char m[row][col];
    for ( int i = 0; i<row; i++ ) {
        for ( int j = 0; j<col; j++ ) {
            cin>>m[i][j];
        }
    }

    // finding row
    int ROW=1;
    for ( int i = 0; i<row; i++ ) {

        int count_asterisk = 0;

        for ( int j = 0; j<col; j++ ) {
            if ( m[i][j] == '*' ) {
                count_asterisk++;
            }
        }
        if ( count_asterisk == 1 ) {
            ROW+=i;
        }
    }

    // finding column
    int COL=1;
    for ( int i = 0; i<col; i++ ) {

        int count_asterisk = 0;

        for ( int j = 0; j<row; j++ ) {
            if ( m[j][i] == '*' ) {
                count_asterisk++;
            }
        }

        if ( count_asterisk == 1 ) {
            COL+=i;
        }
    }

    cout<<ROW<<" "<<COL<<endl;

    return 0;
}


// Clue:

// 1. Unique * for each row and column
// 2. Make a rectangle!