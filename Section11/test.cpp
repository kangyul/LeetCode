#include <bits/stdc++.h>

using namespace std;

stack<char> st;

int main(void) {

    string str = "Mississippi";

    for(int i=0; i<str.size(); i++) {
        char s = str[i];
        if(i==0) st.push(s);

        if(s != st.top()) {
            st.push(s);
        } else {
            st.pop();
            st.pop();
        }

    }

    for(int i=0; i<st.size(); i++) {
        cout << st.top();
        st.pop();
    }

    return 0;
}

// 1) stack empty then, push
// 2) if A[i] != stack.top() then, push
// 3) else if A[i] == stack.top() then, stack.pop() (twice)