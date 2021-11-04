//Author: Sahil Anand
//Problem Link: https://leetcode.com/problems/majority-element-ii/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int mn=nums.size()/3;
        map<int,int>m;
        for(auto val : nums){
            m[val]++;
        }
        vector<int>v;
        for(auto val : m){
            if(val.second>mn){
                v.push_back(val.first);
            }
        }
        return v;
    }
};