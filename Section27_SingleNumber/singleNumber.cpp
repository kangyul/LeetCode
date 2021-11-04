#include <bits/stdc++.h>

using namespace std;

int main(void) {

    vector<int> nums = {4, 2, 1, 2, 1};

    int ans = 0;

    for(int i = 0; i < nums.size(); i++) {
        ans = ans ^ nums[i];
    }

    // A^A = 0
    // A^0 = A

    cout << ans << endl;

    return 0;
}