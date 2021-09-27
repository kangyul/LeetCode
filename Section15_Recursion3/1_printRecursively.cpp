#include <bits/stdc++.h>

using namespace std;

void print(char input[]) {
    if(input[0]=='\0') return;

    cout << input[0];

    print(input+1);
}

void revPrint(char input[]) {
    if(input[0]=='\0') return;

    revPrint(input+1);

    cout << input[0];
}

void reversePrint(char input[], int n) {
    if(n==0) return;

    cout << input[n-1];

    reversePrint(input, n-1);
}

int main(void) {

    char input[] = "abc";

    print(input);

    cout << endl;

    reversePrint(input, 3);

    cout << '\n';

    revPrint(input);

    return 0;
}