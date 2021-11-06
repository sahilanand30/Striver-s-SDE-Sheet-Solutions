//Author: Sahil Anand
//Problem Link: https://leetcode.com/problems/3sum/
class Solution
{
public:
    /*
    Aim:To find {a,b,c} such that a+b+c=0
    ALGORIHM:-
    1. Sort the nums array
    2. We will make 'a' as a constant and find 'b' and 'c' such that b+c=-a
    3. So here we will iterate from 0 to (n-1) for 'a'
    4. And also we will maintain 'lo' and 'hi' pointers
    5. The 'lo' will be at the index after the ath and 'hi' at the left most index
    6. Hence when we get sum 0 from a,lo and hi we will store the triplet!
    */
    vector<vector<int>> threeSum(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        if (nums.size() <= 2)
            return v;
        //iterating 'a'
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if ((i == 0) || (i > 0 && nums[i] != nums[i - 1]))
            {
                int sum = 0 - nums[i], lo = i + 1, hi = nums.size() - 1;
                while (lo < hi)
                {
                    if (nums[lo] + nums[hi] == sum)
                    {
                        vector<int> tmp;
                        tmp.push_back(nums[i]);
                        tmp.push_back(nums[lo]);
                        tmp.push_back(nums[hi]);
                        v.push_back(tmp);
                        while (lo < hi && nums[lo] == nums[lo + 1])
                            lo++;
                        while (lo < hi && nums[hi] == nums[hi - 1])
                            hi--;
                        lo++, hi--;
                    }
                    else if (nums[lo] + nums[hi] < sum)
                        lo++;
                    else
                        hi--;
                }
            }
        }
        return v;
    }
};