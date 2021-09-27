#include <bits/stdc++.h>

using namespace std;

int length(char input[]) {
    if(input[0]=='\0') return 0;

    return 1 + length(input+1);
}

int main(void) {

    char input[] = "abcde";

    cout << length(input) << endl;

    return 0;
}