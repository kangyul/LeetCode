#include <bits/stdc++.h>

using namespace std;

bool isPresent(int a[], int n, int x) {
    if(n==0) return false;

    if(a[0] == x) return true;

    return isPresent(a+1, n-1, x);
}

bool isPresent2(int a[], int n, int x) {
    if(n==0) return false;

    bool remArr = isPresent2(a+1, n-1, x);

    if(remArr) return true;

    if(a[0] == x) return true;
    else return false;
}

bool isPresent3(int a[], int n, int x) {
    if(n==0) return false;

    if(a[n-1] == x) return true;

    return isPresent3(a, n-1, x);
}

bool isPresent4(int a[], int n, int x, int i) {
    if(i==n) return false;

    if(a[i] == x) return true;

    return isPresent4(a, n, x, i+1);
}

int main(void) {

    int arr[] = {1, 2, 3, 4, 5};

    if(isPresent4(arr, 5, 3, 0)) {
        cout << "The element is in the array" << endl;
    } else {
        cout << "The element is not in the array" << endl;
    }

    return 0;
}