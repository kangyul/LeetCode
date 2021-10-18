#include <bits/stdc++.h>

using namespace std;

int main(void) {

    int arr[] = {4,5,6,7,0,1,2};

    // 1. search in rotated sorted array

    int target = 1;

    int s = 0;
    int e = 7;
    int ans = -1;

    while(s<=e) {
        int mid = s+(e-s)/2;

        if(arr[mid] == target) {
            ans = mid;
            break;
        }

        if(arr[mid] >= arr[s]) {
            if(arr[s] <= target && target <= arr[mid]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        } else {
            if(arr[mid] <= target && target <= arr[e]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
    }

    cout << ans << endl;

    // How many times a sorted array is rotated?
    // A: Number of elements before min element (or index of a min element)

    return 0;
}