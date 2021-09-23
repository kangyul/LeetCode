#include <bits/stdc++.h>

using namespace std;

int firstIndex(int a[], int n, int x, int i) {
    if(i==n) return -1;

    if(a[i] == x) return i;

    return firstIndex(a, n, x, i+1);
}

int main(void) {

    int a[] = {1, 2, 3, 4, 5};

    cout << firstIndex(a, 5, 7, 0) << endl;

    return 0;
}