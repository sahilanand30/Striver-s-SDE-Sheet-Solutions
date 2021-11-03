//Author: Sahil Anand
//Problem Link: https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
class Solution
{
public:
    /*ALGORIHM:-
    ->We will use a map to store a key value pair
    ->Here the key will be the prefix sum from 0 to i
    ->Also we will maintain the "mx" which will record the largest length of the subarray
    ->If we find the sum at i already present in the map then we can say that,
      the sum of the alreday found sum's index to i have sum 0.
    */
    int maxLen(vector<int> &A, int n)
    {
        int mx = 0, sum = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum == 0)
            {
                mx = i + 1;
            }
            else
            {
                if (mp.find(sum) != mp.end())
                {
                    mx = max(mx, i - mp[sum]);
                }
                else
                {
                    mp[sum] = i;
                }
            }
        }
        return mx;
    }
};