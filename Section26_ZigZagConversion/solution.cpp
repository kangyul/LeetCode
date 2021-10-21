
#include "solution.h"

string Solution::convert(string s, int numRows)
{
    // string ans[numRows];
    string *ans = new string[numRows];

    // initializing array ans
    for(int i = 0; i < numRows; i++) 
    {
        ans[i] = "";
    }

    int row = 0;
    int step = 1;

    // filling array ans
    for(int i = 0; i < s.length(); i++)
    {
        ans[row].push_back(s[i]);

        if(row == 0) step = 1;
        else if(row == numRows-1) step = -1;

        row = row + step;
    }

    string result = "";

    // merging array ans to result 
    for(int i = 0; i < numRows; i++)
    {
        result += ans[i];
    }

    return result;
}