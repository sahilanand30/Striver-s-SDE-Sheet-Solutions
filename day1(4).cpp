//Author: Sahil Anand
//Problem Link: https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Kadane's Algorithm
        int sum=-999999, best=-999999;
        for(auto val : nums){
            sum=max(val,sum+val);
            best=max(best,sum);
        }
        return best;
    }
};