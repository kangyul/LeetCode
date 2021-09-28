#include <bits/stdc++.h>

using namespace std;

void print_subs(string input, string output, vector<string> &v) {
    if(input.length()==0) {
        v.push_back(output);
        return;
    }

    print_subs(input.substr(1), output+input[0], v); // include
    print_subs(input.substr(1), output, v); // exclude
}

int main(void) {

    string input;
    cin >> input;
    string output = "";

    vector<string> v;

    print_subs(input, output, v);

    for(int i=0; i<v.size(); i++) {
        cout << v[i] << endl;
    }


    return 0;
}