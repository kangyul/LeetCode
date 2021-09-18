#include <bits/stdc++.h>

using namespace std;

// ascending order
void print(int n) {
    // Base Case
    if(n==0) return;

    // Recurvise Case
    print(n-1); // 1, 2, 3..., n-1

    cout<<n<<endl;
}

// descending order
void print2(int n) {
    if(n==0) return;

    cout<<n<<endl;

    print2(n-1);
}

int main(void) {

    print(5);

    cout << endl;
    
    print2(5);

    return 0;
}