#include <bits/stdc++.h>

using namespace std;

int multiply(int m, int n) {
    // Base Case
    if(n == 0) return 0;

    // Recursion Case 
    int smallOutput = multiply(m, n-1);

    // Calculation
    return smallOutput + m;
}

int main(void) {

    ios::sync_with_stdio(0); cin.tie(0);

    int M, N;
    cout << "Enter two numbers: ";
    cin >> M >> N;

    cout << M << " multiplied by " << N << " is... ";
    cout << multiply(M, N) << '\n';

    return 0;
}
