#include <bits/stdc++.h>

using namespace std;

int fact(int n) {
    if(n==1) return 1;
    int smallAns = fact(n-1);
    return n * smallAns; 
}

int main(void) {

    int n;
    cin >> n;

    int ans = fact(n);
    cout << ans << '\n';

    return 0;
}