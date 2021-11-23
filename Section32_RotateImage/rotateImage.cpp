// 48. Rotate Image

#include <bits/stdc++.h>

using namespace std;

void rotate(vector<vector<int>>& matrix);

int main(void) {

    vector<vector<int>> matrix
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

    rotate(matrix);

    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}

void rotate(vector<vector<int>>& matrix) {

    int m = matrix.size();
    int n = matrix[0].size();

    for(int row = 0; row < m; row++) {
        for(int col = row; col < n; col++) {
            swap(matrix[row][col], matrix[col][row]);
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n/2; j++) {
            swap(matrix[i][j], matrix[i][m - j - 1]);
        }
    }
}