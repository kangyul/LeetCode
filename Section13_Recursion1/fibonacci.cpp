#include <bits/stdc++.h>

using namespace std;

int fib(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    int smallOutput1 = fib(n-2);
    int smallOutput2 = fib(n-1);

    return smallOutput1 + smallOutput2;

}

int main(void) {

    cout << fib(3);
    return 0;
}