//Author: Sahil Anand
//Problem Link: https://leetcode.com/problems/merge-intervals/
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> res;
        if (intervals.size() == 0)
        {
            return res;
        }
        sort(intervals.begin(), intervals.end());
        vector<int> tmp = intervals[0];
        for (auto val : intervals)
        {
            if (val[0] <= tem[1])
            {
                tem[1] = max(val[1], tmp[1]);
            }
            else
            {
                res.push_back(tmp);
                tmp = val;
            }
        }
        res.push_back(tmp);
        return res;
    }
};