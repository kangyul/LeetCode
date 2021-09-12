#include <bits/stdc++.h>

using namespace std;

int main(void) {

    string s = "abc";
    cout<<s<<endl;

    string s2;
    s2 = "def";
    cout<<s2<<endl;

    string *sp = new string;
    *sp = "map";
    cout << sp << '\n';
    cout << *sp << '\n';

    vector<string> vec;
    vec.push_back(s);
    vec.push_back("hello");
    for(int i=0; i<vec.size(); i++) {
        cout << vec[i] << endl;
    }
    
    string s3;
    getline(cin, s3);
    cout << s3 << endl;

    s3 = "abcdef";
    cout << s[1] << '\n';

    // string can act as an array;

    string s4 = s3 + s;
    // simply concatenate two or more strings
    cout << s4 << endl;

    cout << s4.size() << endl;
    cout << s4.length() << endl;
    // can use both size * length function.

    cout << s4.substr(3, 4);
    // s4 = "abcdef";
    // s4.substr(1, 3) == "bc"

    string str = "abcabcabc";
    cout << str.find("abc") << endl;
    // returns the index of a first character;

    int a = 123;
    string s6 = to_string(a);
    //  type conversion: to_string()
    cout << s6 << endl;

    
    a = atoi(s6.c_str());
    // a += 100;
    cout << a << endl;

    return 0;
}