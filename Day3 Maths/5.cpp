//Author: Sahil Anand
//Problem Link: https://leetcode.com/problems/unique-paths/
class Solution
{
public:
    int dp[105][105];
    int unique(int i, int j, int m, int n)
    {
        if (i == m + 1 || j == n + 1)
            return 0;
        if (i == m && j == n)
            return 1;
        if (dp[i][j] != -1)
            return dp[i][j];
        dp[i][j] = unique(i + 1, j, m, n) + unique(i, j + 1, m, n);
        return dp[i][j];
    }
    int uniquePaths(int m, int n)
    {
        int ct = 0, i = 1, j = 1;
        memset(dp, -1, sizeof(dp));
        int ans = unique(i, j, m, n);
        return ans;
    }
};