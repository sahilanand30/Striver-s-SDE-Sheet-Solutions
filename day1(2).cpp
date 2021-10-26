//Author: Sahil Anand
//Problem Link: https://leetcode.com/problems/pascals-triangle/
class Solution {
public:
    vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;
    int arr[numRows][numRows];
    for (int i = 0; i < numRows; i++) //initialization
    {
        for (int j = 0; j < numRows; j++)
        {
            arr[i][j] = 0;
        }
    }
    for (int i = 0; i < numRows; i++) //initialization
    {
        for (int j = 0; j < numRows; j++)
        {
            if (j == 0)
            {
                arr[i][j] = 1;
            }
        }
    }
    for (int i = 1; i < numRows; i++)
    {
        for (int j = 1; j < numRows; j++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    for (int i = 0; i < numRows; i++)
    {
        vector<int> temp;
        for (int j = 0; j < numRows; j++)
        {
            if (arr[i][j] != 0)
            {
                temp.push_back(arr[i][j]);
            }
        }
        ans.push_back(temp);
        temp.clear();
    }
    return ans;
}
};