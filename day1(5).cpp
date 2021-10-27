//Author: Sahil Anand
//Problem Link: https://leetcode.com/problems/sort-colors/
class Solution {
public:
    /*
    ALGORITHM:
    ->Here we will maintain 3 pointers lo,mid and hi
    ->Intially lo and mid will be at 1st index and hi at last
    ->Here we will maintain these three pointers in such a way
      that at the end, till lo we will have 0s, from lo to mid we 
      will have 1s and from mid to hi we will have 2s.
    */
    void sortColors(vector<int>& nums) {
        int lo=0, mid=0, hi=nums.size()-1;
        while(mid<=hi){
            if(nums[mid]==0){
                swap(nums[lo], nums[mid]);
                lo++,mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid], nums[hi]);
                mid,hi--;
            }
        }
    }
};