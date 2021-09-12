// vector benefits
// 1. don't need to certain a size
// 2. can double a size (unlike an array)

#include <bits/stdc++.h>

using namespace std;

int main(void) {

    vector<int> *vp = new vector<int>(); // dynamic - we have to delete it.
    vector<int> v; // static - deleted automatically 

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v[1] = 100;

    // v[4] = 1002;
    // v[5] = 1003;
    // cout << v[4] << endl;
    // cout << v[5] << endl;
    // if we use v[5] = x instead of push_back the size of
    // a vector does not increase
    // -> NEVER USE [] TO INSERT ELEMENTS!

    v.push_back(23);
    v.push_back(234);

    // cout << v.at(4) << endl;
    // cout << v.at(6) << endl;

    for(int i=0; i<v.size(); i++) {
        cout << v.at(i) << endl;
    }

    cout << '\n';

    v.pop_back(); // deletes the last element;

    for(int i=0; i<v.size(); i++) {
        cout << v.at(i) << endl;
    }

    cout << '\n';

    cout << v.capacity() << endl;

    return 0;
}