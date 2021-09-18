#include <bits/stdc++.h>

using namespace std;

int power(int x, int n) {
    // base case
    if(n==0) return 1;

    // recursive case
    int smallOutput = power(x, n-1); 

    // Calculation
    return x*smallOutput;    
}

int main(void) {

    cout << power(5, 3);
    return 0;
}