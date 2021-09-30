#include <bits/stdc++.h>

using namespace std;

int partition(int a[], int s, int e){

    int i=s;
    int pivot = a[e];
    for(int j=s; j<=e-1; j++) {
        if(a[j] < pivot) {
            swap(a[i], a[j]);
            i++;
        }
    }    

    swap(a[i], a[e]);

    return i; 
}

void quickSort(int a[], int s, int e) {
    if(s>=e) return;

    int p = partition(a, s, e);
    quickSort(a, s, p-1);
    quickSort(a, p+1, e);
}

int main(void) {

    int a[] = {2, 4, 5, 6, 1, 8, 7};

    quickSort(a, 0, 6);

    for(int i=0; i<7; i++) {
        cout << a[i] << ' ';
    }

    return 0;
}