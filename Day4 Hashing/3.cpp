//Author: Sahil Anand
//Problem Link: https://leetcode.com/problems/longest-consecutive-sequence/
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        set<int> st;
        for (auto val : nums)
        {
            st.insert(val);
        }
        vector<int> v;
        for (auto val : st)
            v.push_back(val);
        if (v.size() == 0)
            return 0;
        if (v.size() == 1)
            return 1;
        int mx = 0, ct = 1;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] - v[i - 1] == 1)
            {
                ct++;
            }
            else
            {
                ct = 1;
            }
            mx = max(mx, ct);
        }
        return mx;
    }
};