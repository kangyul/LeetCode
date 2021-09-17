// 1209. Remove All Adjacent Duplicates in String II
// 2021.09.16 (Thursday)
// Example 1:

// Input: s = "abcd", k = 2
// Output: "abcd"
// Explanation: There's nothing to delete.

#include <bits/stdc++.h>

using namespace std;

int main(void) {

    string A = "deeedbbcccbdaa";
    int k = 3;

    stack<pair<char, int> > st;

    for(int i=0; i<A.size(); i++) {
        if(st.empty() || st.top().first != A[i]) {
            st.push(make_pair(A[i], 1));
        } else {
            st.top().second++;
            int count = st.top().second;
            if(count == k) {
                st.pop();
            }
        }
    }

    string ans = "";
    while(!st.empty()) {
        int count = st.top().second;
        while(count--) {
            ans.push_back(st.top().first);
        }
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    cout << ans << '\n';

    return 0;
}