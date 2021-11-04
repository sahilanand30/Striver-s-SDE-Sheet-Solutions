//Author: Sahil Anand;
//Problem Link: https://leetcode.com/problems/majority-element/
class Solution {
public:
   int majorityElement(vector<int> &nums)
{
    map<int, int> m;
    vector<pair<int, int>> v;
    for (auto val : nums)
    {
        m[val]++;
    }
    for (auto val : m)
    {
        v.push_back({val.second, val.first});
    }
    sort(v.rbegin(), v.rend());
    int a = v[0].second;
    return a;
}
};