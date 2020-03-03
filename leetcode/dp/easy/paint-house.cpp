class Solution {
public:
    int func(vector<vector<int>>& costs, char neigh, char level){
        int cost = costs[level][neigh];
        if(level == costs.size() - 1){

        }
        else if(neigh == 0){
            cost += min(func(costs, 1, level + 1), func(costs, 2, level + 1));
        }
        else if(neigh == 1){
            cost += min(func(costs, 0, level + 1), func(costs, 2, level + 1));
        }
        else if(neigh == 2){
            cost += min(func(costs, 0, level + 1), func(costs, 1, level + 1));
        }
        return cost;
    }
    int minCostBrute(vector<vector<int>>& costs) {
        if(costs.size() == 0){
            return 0;
        }
        return min(func(costs, 0, 0), min(func(costs, 1, 0), func(costs, 2, 0)));
    }
};

class Solution {
public:
    int minCost(vector<vector<int>>& costs) {
        if(costs.size() == 0){
            return 0;
        }
        int n = costs.size();
        vector<int> prevRow = costs[n - 1];
        for(int i=n-2;i>=0;i--){
            vector<int> currRow = costs[i];
            currRow[0] += min(prevRow[1], prevRow[2]);
            currRow[1] += min(prevRow[0], prevRow[2]);
            currRow[2] += min(prevRow[1], prevRow[0]);
            prevRow = currRow;
        }

        return min(prevRow[0], min(prevRow[1], prevRow[2]));
    }
};
