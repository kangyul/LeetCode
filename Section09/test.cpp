// 2021.09.09
// 125. Valid Palindrome
// Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
// 


#include <bits/stdc++.h>

using namespace std;

int main(void) {

    string str = "A man, a plan, a canal: Panama";

    int l = 0;
    int n = str.size();
    int r = n - 1;

    while(l <= r) {

        while(l<r && !isalnum(str[l])) l++;
        while(l<r && !isalnum(str[r])) r--;

        if(toupper(str[l]) != toupper(str[r])) {
            cout << false << endl;
            return 0;
        }

        l++;
        r--;

    }

    cout << true << endl;

    return 0;
}