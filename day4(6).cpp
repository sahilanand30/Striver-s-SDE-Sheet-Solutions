//Author: Sahil Anand
//Problem Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution
{
public:
    /*ALGORITHM:-
      ->Here we will maintain "l" and "r" pointer
      ->Also we will make a map<char,int> which will store the last visited character with
        its index
      ->Initially both "l" and "r" will be at 0th index
      ->Then we will traverse "r" by one step
      ->If we cannot find the rth char in the map that means the sub-string l to r has no 
        repeating characters
      ->If we can find the rth char in the map that means the sub-string l to r has
        repeating characters in it. So we will update l to the (m[s[r]]+1) as we want
        non-repeating character in the substring
      ->Along with it we will maintain the length of the largest sub-string
      ->The length of the sub-string is given by (r-l+1)
    */
    int lengthOfLongestSubstring(string s)
    {
        map<char, int> m;
        int l = 0, r = 0;
        int len = 0;
        while (r < s.length())
        {
            if (m.find(s[r]) != m.end())
            {
                l = max(m[s[r]] + 1, l);
            }
            m[s[r]] = r;
            len = max(len, r - l + 1);
            r++;
        }
        return len;
    }
};
