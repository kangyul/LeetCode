#include <bits/stdc++.h>

using namespace std;

bool canJump(vector<int>& nums) {
    int n = nums.size();
    int goodIndex = n - 1;

    for(int i = n - 2; i >= 0; i--) {
        if(i + nums[i] >= goodIndex) {
            goodIndex = i;
        }
    }

    if(goodIndex == 0) {
        return true;
    } else {
        return false;
    }
}

int main(void) {

    vector<int> nums = {2, 3, 1, 1, 4};

    bool ans = canJump(nums);

    cout << boolalpha << ans << endl;

    vector<int> nums2 = {3, 2, 1, 0, 4};

    ans = canJump(nums2);

    cout << boolalpha << ans << endl;

    return 0;
}