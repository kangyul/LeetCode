#include <bits/stdc++.h>

using namespace std;

void printAll(int a[], int n, int x, int i) {
    if(i==n) return;

    if(a[i]==x) {
        cout << i << " ";
    }

    printAll(a, n, x, i+1);

}

int main(void) {

    int a[] = {5, 5, 6, 5, 6, 7};

    printAll(a, 6, 5, 0);

    return 0;
}