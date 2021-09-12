#include <bits/stdc++.h>

using namespace std;

int main(void) {

    string str = "FXSHRXW";

    int sum = 0;
    int length = str.size();
    for(int i=0; i<length; i++) {
        int num = str[length-i-1]-'A'+1;
        sum += pow(26, i) * num;
    }

    cout << sum << '\n';

    return 0;
}