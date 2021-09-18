// This code implements a function that returns a digit of a number
// Ex) 3245 -> 4, 12345 -> 5, 

#include <bits/stdc++.h>

using namespace std;

int count(int n) {
    // Base Case
    if(n==0) return 0;

    //Recursive Case
    int cnt = count(n/10);

    // Calculation
    return cnt + 1;
}

int main(void) {

    int num = 0;
    cout << "Please enter a number" << endl;
    cin >> num;

    cout << "Your number is..." << endl;
    cout << count(num) << " digits!" << endl;

    return 0;
} 