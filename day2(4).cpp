//Author: Sahil Anand
//Problem Link: https://leetcode.com/problems/find-the-duplicate-number/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(auto val : nums)m[val]++;
        int n;
        for(auto val : m){
            if(val.second>1){
                n=val.first;
                break;
            }
        }
        return n;
    }
};