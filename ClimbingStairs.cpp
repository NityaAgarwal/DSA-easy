//https://leetcode.com/problems/climbing-stairs/description/

class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n+1);
        for (int i = 0; i<=n; i++) {
            //base cases
            if (i < 3) dp[i] = i;

            //corresponding to:
            //M1 : 1step taken, now remaining are n-1 stair problem
            //M2 : 2step taken, now remaining are n-2 stair problem
            else dp[i] = dp[i-1] + dp[i-2]; 
        }
        return dp[n];
    }
};
