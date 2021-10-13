#include <bits/stdc++.h>

using namespace std;

int main(void) {

    int nums[] = {4, 5, 6, 7, 9, 1, 2};

    int s = 0;
    int e = 6;
    int target = 9;
    int ans = -1;

    while(s<=e) {
        int mid = s+(e-s)/2;

        if(nums[mid] == target) {
            ans = mid;
            break;
        }

        if(nums[s] <= nums[mid]) {
            if(target >= nums[s] && target <= nums[mid]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        } else {
            if(target >= nums[mid] && target <= nums[e]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
    }

    cout << ans << endl;

    return 0;
}