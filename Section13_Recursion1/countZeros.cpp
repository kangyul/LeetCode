#include <bits/stdc++.h>

using namespace std;

int cnt;

int countZeros(int n) {

    // base
    if(n==0) return 0;

    // recursion
    int smallOutput = countZeros(n/10);

    // Calculation
    return (n%10 == 0) ? smallOutput + 1 : smallOutput;
}

int main(void) {

    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "There are total " << countZeros(num) << " Zeros\n"; 

    return 0;
}