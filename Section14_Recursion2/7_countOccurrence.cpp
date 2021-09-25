#include <bits/stdc++.h>

using namespace std;

// myApproach
int countOccur(int a[], int n, int x, int i) {
    if(i==n) return 0;

    int cnt = countOccur(a, n, x, i+1);
    if(a[i]==x) {
        return cnt + 1;
    } else {
        return cnt;
    }
}

// First Approach
void count(int a[], int n, int x, int i, int &ans) {
    if(i==n) return;

    if(a[i]==x) ans++;

    count(a, n, x, i+1, ans);
}

// Second Approach
int count2(int a[], int n, int x, int i) {
    if(i==n) return 0;

    if(a[i]==x) {
        return 1+count2(a, n, x, i+1);
    } else {
        return count2(a, n, x, i+1);
    }
}

int main(void) {

    int a[] = {1, 2, 2, 3, 4, 4, 4, 5, 5, 6, 7};

    int ans = 0;
    count(a, 11, 3, 0, ans);
    cout << ans << endl;
    cout << count2(a, 11, 3, 0) << endl;

    return 0;
}