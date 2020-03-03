class Solution {
public:
    int climbStairsRec(int n) {
        if(n == 0){
            return 1;
        }
        if(n < 0){
            return 0;
        }
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
    int climbStairsDP(int n) {
        if(n <= 1){
            return n;
        }
        int dp[n+1];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        for(int i=3;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};
