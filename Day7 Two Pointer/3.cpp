//Author: Sahil Anand
//Problem Link: https://leetcode.com/problems/trapping-rain-water/
class Solution {
public:
    int trap(vector<int> &height)
{
    int left[height.size()], right[height.size()], water = 0; //here no of water is unit(1 block) of rainwater
    int maxLeft = -1, maxRight = -1;
    for (int i = 0; i < height.size(); i++)
    {
        maxLeft = max(maxLeft, height[i]);
        left[i] = maxLeft;
    }
    for (int i = height.size() - 1; i >= 0; i--)
    {
        maxRight = max(maxRight, height[i]);
        right[i] = maxRight;
    }
    for (int i = 0; i < height.size(); i++)
    {
        int temp = min(right[i], left[i]);
        if (temp - height[i] > 0)
        {
            water = water + (temp - height[i]);
        }
    }
    return water;
}
};