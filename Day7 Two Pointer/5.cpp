//Author: Sahil Anand
//Problem Link: https://leetcode.com/problems/max-consecutive-ones/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ct=0, mx=0;
        for(auto val : nums) 
        {
            if(val==1){
                ct++;    
            }
            else{
                mx=max(mx,ct);
                ct=0;
                }
        }
        mx=max(mx,ct);
        return mx; 
    }
};