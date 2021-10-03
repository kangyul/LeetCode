#include <bits/stdc++.h>

using namespace std;

int binarySearch(int a[], int n, int key) {

    int s = 0;
    int e = n-1;

    while(s<=e) {
        int mid = s + (e-s)/2;
        // prev: (s+e)/2 
        // curr: s + (e-s)/2
        // reason: to prevent an integer overflow.

        if(a[mid] == key) {
            return mid;
        } else if(a[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return -1;
}

int main(void) {

    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    cout << "Enter a key: " << endl;
    int key;
    cin >> key;

    sort(a, a+n);

    int pos = binarySearch(a, n, key);

    if(pos==-1) {
        cout << "Key Not Found" << endl;
    } else {
        cout << "Key found at index: " << pos << endl;
    }

    return 0;
}