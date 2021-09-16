#include <bits/stdc++.h>

using namespace std;

stack<char> st;

int main(void) {

    string A = "Mississippi";

    // Time Complexity: O(N), Space Complexity: O(N)

    // for(int i=0; i<str.size(); i++) {
    //     if(st.empty() || st.top() != str[i]) {
    //         st.push(str[i]);
    //     } else {
    //         st.pop();
    //     }
    // }

    // string ans = "";
    // while(!st.empty()) {
    //     ans.push_back(st.top());
    //     st.pop();
    // }

    // reverse(ans.begin(), ans.end());

    // cout << ans << '\n';

    // Time Complexity: O(N), Space Complexity: O(1);

    int strptr = -1;

    for(int i=0; i<A.size(); i++) {
        if(strptr == -1 || A[strptr] != A[i]) {
            strptr++;
            A[strptr] = A[i];
        } else {
            strptr--;
        }
    }

    string ans = "";

    for(int i=0; i<=strptr; i++) {
        ans.push_back(A[i]);
    }

    cout << ans << '\n';

    return 0;
}

// 1) stack empty then, push
// 2) if A[i] != stack.top() then, push
// 3) else if A[i] == stack.top() then, stack.pop() (twice)
// 4) Finally, we need to reverse the stack