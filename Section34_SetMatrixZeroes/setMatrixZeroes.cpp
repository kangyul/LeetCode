#include <bits/stdc++.h>

using namespace std;

void setZeroes(vector<vector<int>>& matrix);

int main(void) {

    vector<vector<int>> matrix
    {
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5}
    };

    // [[0,1,2,0],[3,4,5,2],[1,3,1,5]]

    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

    setZeroes(matrix);

    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}

void setZeroes(vector<vector<int>>& matrix) {

    int m = matrix.size();
    if(m == 0) return;
    int n = matrix[0].size();
    if(n == 0) return;

    bool firstRow = false;
    bool firstColumn = false;

    // check firstRow & firstColumn

    for(int i = 0; i < m; i++) {
        if(matrix[i][0] == 0) {
            firstColumn = true;
            break;
        }
    }

    for(int i = 0; i < n; i++) {
        if(matrix[0][i] == 0) {
            firstRow = true;
            break;
        }
    }

    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    if(firstColumn) {
        for(int i = 0; i < m; i++) {
            matrix[i][0] = 0;
        }
    }

    if(firstRow) {
        for(int i = 0; i < n; i++) {
            matrix[0][i] = 0;
        }
    }
}