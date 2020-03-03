class Solution {
public:
    int func(vector<int>& cost, int index){
        if(index >= cost.size()){
            return 0;
        }
        int c = cost[index];
        c += min(func(cost, index + 1), func(cost, index + 2));
        return c;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return min(func(cost, 0) ,func(cost, 1));
    }
};

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
        int n = cost.size();
        int dp[n];
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i=2;i<n;i++){
            dp[i] = min(dp[i-1], dp[i-2]) + cost[i];
        }
        return dp[n-1];
    }
};
