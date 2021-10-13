#include <bits/stdc++.h>

using namespace std;

int main(void) {

    int arr[] = {4, 5, 6, 7, 9, 1, 2};

    int s = 0;
    int e = 6;
    int target = 9;
    int ans = -1;

    while(s<=e) {
        int mid = s+(e-s)/2;

        if(arr[mid] == target) {
            ans = mid;
            break;
        }

        if(arr[s] <= arr[mid]) {
            if(target >= arr[s] && target <= arr[mid]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        } else {
            if(target <= arr[e] && target >= arr[mid]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        
    }

    cout << "Anser is: " << ans << endl;

    return 0;
}