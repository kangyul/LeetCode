#include <bits/stdc++.h>

using namespace std;

void reverse(string &str, int begin, int end) {
    while(begin<=end) {
        swap(str[begin], str[end]);
        begin++;
        end--;
    }
}

string reverseWords(string s) {

    int begin = 0;
    int end = 0;

    while(end < s.size()) {
        if(s[end] == ' ') {
            reverse(s, begin, end-1);
            begin = end;
            end++;
        } else {
            end++;
        }
    }

    reverse(s, begin, end-1);

    reverse(s, 0, s.size()-1);

    string help;

    int i = 0;

    // first part
    while(s[i] == ' ') i++;

    while(i < s.size()) {
        if(s[i] == ' ') {
            help.push_back(' ');
            i++;
            while(s[i]==' ') i++;
        } else {
            help.push_back(s[i]);
            i++;
        }
    }

    // last part

    if(help.back() == ' ') help.pop_back();

    return help;
}

int main(void) {

    string s1 = "the sky is blue";
    string s2 = "  hello world  ";

    cout << reverseWords(s1) << endl;
    cout << reverseWords(s2) << endl;

    return 0;
}