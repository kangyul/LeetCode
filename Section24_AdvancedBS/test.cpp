#include <bits/stdc++.h>

using namespace std;

int mySqrt(int x) {

    if(x==0) return 0;

    int s = 1;
    int e = x;
    int ans = 0;

    while(s<=e) {
        int mid = s+(e-s)/2;

        if(mid == x/mid) {
            return mid;
        } else if(mid > x/mid) {
            e = mid - 1;
        } else {
            ans = mid;
            s = mid + 1;
        }
    }

    return ans; 
}

int main(void) {

    int x = 4;
    cout << mySqrt(4) << endl;

    x = 8;
    cout << mySqrt(8) << endl;

    return 0;
}