#include <bits/stdc++.h>

using namespace std;

int jump(vector<int> nums) {

    int jumps = 0;
    int curr = 0;
    int maxJump = 0;

    for(int i = 0; i < nums.size() - 1; i++) {

        maxJump = max(maxJump, i + nums[i]);

        if(i == curr) {
            jumps++;
            curr = maxJump;
        }
    }

    return jumps;
} 

int main(void) {

    vector<int> nums = {2, 3, 1, 1, 4};

    cout << jump(nums) << endl;

    return 0;
}