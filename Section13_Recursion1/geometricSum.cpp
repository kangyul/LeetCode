#include <bits/stdc++.h>

using namespace std;

double gSum(int n) {
    // base case
    if(n==0) return 1;

    // recursion case
    double smallOutput = gSum(n-1);

    // Calculation 
    return smallOutput + (1.0/pow(2, n));
}

int main(void) {

    int num;
    cin >> num;

    cout << "The gSum is... " << gSum(num) << endl;;

    return 0;
}