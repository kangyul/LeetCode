#include <bits/stdc++.h>

using namespace std;

int main(void) {

    int a[] = {2, 2, 1, 1, 1, 2, 2};

    int cand = a[0];
    int count = 1;

    for(int i=1; i<7; i++) {
        if(a[i] == cand) {
            count++;
        } else {
            count--;
        }

        if(count==0) {
            cand = a[i];
            count++;
        }
    }

    cout << cand << endl;

    // if we cannot assume, we need to check

    int count2=0;

    for(int i=0; i<7; i++) {
        if(a[i]==cand) count2++;
    }

    if(count>7/2) cout << cand << endl;
    else cout << -1 << endl;

    return 0;
}