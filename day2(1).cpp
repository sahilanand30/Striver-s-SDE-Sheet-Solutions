//Author: Sahil Anand
//Problem Link: https://leetcode.com/problems/rotate-image/
class Solution {
public:
    void rotate(vector<vector<int>> &matrix)
{
    int sz = matrix.size();
    vector<vector<int>> ans;
    for (int j = 0; j < sz; j++)
    {
        vector<int> temp;
        for (int i = 0; i < sz; i++)
        {
            temp.push_back(matrix[sz - 1 - i][j]);
        }
        ans.push_back(temp);
    }
    matrix.clear();
    for (auto val : ans)
    {
        matrix.push_back(val);
    }
}
};