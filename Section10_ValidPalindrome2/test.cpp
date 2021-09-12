#include <bits/stdc++.h>

using namespace std;

bool check(string str, int s, int e) {
    while(s <= e) {
        if(str[s] != str[e]) return false;
        s++; 
        e--;
    }
    return true;
}

int main(void) {

    string str = "abac";

    int s = 0;
    int e = str.size() - 1;

    while(s<=e) {
        if(str[s] != str[e]) {
            if(check(str, s+1, e) || check(str, s, e-1)) {
                cout << "true" << endl;
                return 0;
            } else {
                cout << "false" << endl;
                return 0;
            }
        }

        s++;
        e--;
    }

    cout << true << endl;

    return 0;
}