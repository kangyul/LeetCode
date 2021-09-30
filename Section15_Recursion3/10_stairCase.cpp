#include <bits/stdc++.h>

using namespace std;

int stairCase(int n) {
    if(n==0 || n == 1) return 1;
    if(n==2) return 2;

    return stairCase(n-1) + stairCase(n-2) + stairCase(n-3);
}

int main(void) {

    int n;
    cin >> n;

    cout << stairCase(n) << endl;

    return 0;
}