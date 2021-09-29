#include <bits/stdc++.h>

using namespace std;

int convertStringToInt(char str[], int n) {
    if(n==0) return 0;

    int smallAns = convertStringToInt(str, n-1);
    int lastDigit = str[n-1] - '0';
    int ans = smallAns*10 + lastDigit;

    return ans;
}

int main(void) {

    char str[] = "12345";
    // int n = length(str);

    cout << convertStringToInt(str, 5);

    return 0;
}