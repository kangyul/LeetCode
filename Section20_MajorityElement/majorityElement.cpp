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

    return 0;
}