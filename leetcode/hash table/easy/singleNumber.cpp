class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto i: m){
            if(i.second == 1){
                return i.first;
            }
        }
        return -1;
    }
};class Solution {
public:
    int singleNumberHashTable(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto i: m){
            if(i.second == 1){
                return i.first;
            }
        }
        return -1;
    }
    int singleNumberXor(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        for(int i=1;i<n;i++){
            ans ^= nums[i];
        }
        return ans;
    }
};
