#include <bits/stdc++.h>

using namespace std;

void myBubbleSort(int a[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<=n-2; j++) {
            if(a[j] >  a[j+1]) {
                swap(a[j], a[j+1]);
            }
        }
    }
}

int main(void) {

    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    myBubbleSort(a, n);

    for(int i=0; i<n; i++) {
        cout << a[i] << ' ';
    }

    cout << endl;

    return 0;
}