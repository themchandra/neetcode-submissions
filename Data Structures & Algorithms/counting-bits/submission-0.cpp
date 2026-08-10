class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> dp(n+1);
        
        // base cases
        if (n != 0) {
            dp[1] = 1;
        }
        dp[0] = 0;

        // fill the dp table
        for (int i = 0; i <= n; i++) {
            if (2*i <= n) {
                dp[2*i] = dp[i];
            }

            if ((2*i + 1) <= n) {
                dp[(2*i)+1] = dp[i] + 1;
            }
        }

        return dp;
    }
};
