/* 
Problem 41: PolandBall and Hypothesis
Problem Link: https://codeforces.com/problemset/problem/755/A
*/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
      if(n <= 1) return false;
      if(n == 2 || n == 3) return true;

      for(int i = 2; i < n; i++)
      {
        if(n % i == 0) return false;
      }
      return true;
}

int main() {

    int n;
    cin>>n;

    for (int m = 1; m <= 1000; ++m) {
        int check = n * m + 1;
        if (!isPrime(check)) {
            cout << m;
            break;
        }
    }

    return 0;
}