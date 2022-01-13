#include <bits/stdc++.h>

using namespace std;

int main(void) {

    vector<string> tokens = {"4", "13", "5", "/", "+"};
    stack<int> st;

    for(int i=0; i<tokens.size(); i++) {
        if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/") {

            int v1 = st.top();
            st.pop();
            int v2 = st.top();
            st.pop();

            if(tokens[i]=="+") {
                st.push(v2+v1 );
            } else if(tokens[i]=="-") {
                st.push(v2-v1);
            } else if(tokens[i]=="*") {
                st.push(v2*v1);
            } else if(tokens[i]=="/") {
                st.push(v2/v1);
            }
        } else {
            st.push(atoi(tokens[i].c_str()));
        }
    }

    cout << st.top() << '\n';

    return 0;
}