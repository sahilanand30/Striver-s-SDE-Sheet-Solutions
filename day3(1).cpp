//Author: Sahil Anand;
//Problem Link: https://leetcode.com/problems/search-a-2d-matrix/
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        for (auto val : matrix)
        {
            for (auto ele : val)
            {
                if (ele == target)
                {
                    return true;
                }
                else if (ele > target)
                {
                    return false;
                }
            }
        }
        return false;
    }
};