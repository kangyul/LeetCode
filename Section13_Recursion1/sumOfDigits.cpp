#include <bits/stdc++.h>

using namespace std;

int sum(int x) {
    // Base Case
    if(x/10 == 0) return x;

    // Recursion Case
    int smallOutput = sum(x/10);

    // Calculation
    return smallOutput + (x%10);

}

int main(void) {

    ios::sync_with_stdio(0); cin.tie(0);

    int num = 0;

    cout << "Enter a number: ";
    cin >> num;

    cout << "The answer is: " << sum(num) << '\n';

    return 0;
}