#include <bits/stdc++.h>

using namespace std;

void findPermutation(string A);

vector<int> ans;

int main(void) {

    string s1 = "DI";

    findPermutation(s1);

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << ' ';
    }

    cout << '\n';

    return 0;
}

void findPermutation(string A) {

    int s = 1;
    int e = A.size() + 1;

    for(int i = 0; i < A.size(); i++) {
        if(A[i] == 'D') {
            ans.push_back(e);
            e--;
        } else {
            ans.push_back(s);
            s++;
        }
    }

    ans.push_back(e);
}