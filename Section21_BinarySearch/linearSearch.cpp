#include <bits/stdc++.h>

using namespace std;

int linearSearch(int a[], int n, int key) {
    for(int i=0; i<n; i++) {
        if(a[i] == key) {
            return i;
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

    int pos = linearSearch(a, n, key);

    if(pos==-1) {
        cout << "Key Not Found" << endl;
    } else {
        cout << "Key found at index:" << pos << endl;
    }

    return 0;
}