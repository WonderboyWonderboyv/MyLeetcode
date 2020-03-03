class Solution {
public:
    vector<int> twoSumBruteForce(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }
    vector<int> twoSumHashing(vector<int>& a, int target) {
        int n = a.size();
        map<int,int> m;
        for(int i=0;i<n;i++){
            if(m.find(target - a[i]) != m.end()){
                return {i, m[target - a[i]]};
            }
            else{
                m[a[i]] = i;
            }
        }
        return {-1, -1};
    }
    bool twoSumSorting(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = nums.size() - 1;
        vector<int> result;
        while(l < r){
            int sum = nums[l] + nums[r];
            if(sum == target){
                return true;
            }
            if(sum < target){
                l++;
            }
            if(sum > target){
                r--;
            }
        }
        return false;
    }
};
