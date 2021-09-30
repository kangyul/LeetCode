#include <bits/stdc++.h>

using namespace std;

void selectionSort(int a[], int n) {
    for(int i=0; i<=n-2; i++) {
        int smallest = i;
        for(int j=i+1; j<=n-1; j++) {
            if(a[j] < a[smallest]) {
                smallest = j;
            }
        }
        swap(a[i], a[smallest]);
    }
}

int main(void) {

    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    selectionSort(a, n);

    for(int i=0; i<n; i++) {
        cout << a[i] << ' ';
    }

    cout << endl;

    return 0;
}