#include <bits/stdc++.h>

using namespace std;

void replace(char input[], char x) {

    if(input[0]=='\0') return;

    return replace(input+1, x);

    if(input[0] == x) input[0] = 'x';
}

void replaceChar(char input[]) {
    if(input[0] == '\0') return;

    if(input[0] == 'a') {
        input[0] = 'x';
    }

    return replaceChar(input+1);
}

int main(void) {

    char input[100];
    cin >> input;

    replaceChar(input);

    cout << input << endl;

    return 0;
}