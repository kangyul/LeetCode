#include <bits/stdc++.h>

using namespace std;

void spiralOrder(vector<vector<int>>& matrix);

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

    spiralOrder(matrix);
    
    return 0;
}

void spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;

    int m = matrix.size();
    int n = matrix[0].size();

    int sr = 0, er = m - 1, sc = 0, ec = n - 1;
    int count = 0;

    while((sr <= er) && (sc <= ec)) {
        // print sr
        for(int i = sc; i <= ec; i++) {
            ans.push_back(matrix[sr][i]);
            count++;
        }        
        sr++;
        if(count == m*n) break;

        // print ec
        for(int i = sr; i <= er; i++) {
            ans.push_back(matrix[i][ec]);
            count++;
        }
        ec--;
        if(count == m*n) break;

        // print er
        for(int i = ec; i >= sc; i--) {
            ans.push_back(matrix[er][i]);
            count++;
        }
        er--;
        if(count == m*n) break;

        // print sc
        for(int i = er; i >= sr; i--) {
            ans.push_back(matrix[i][sc]);
            count++;
        }
        sc++;
        if(count == m*n) break;
    }

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << ' ';
    }
    
    cout << endl;
}