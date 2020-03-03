class Solution {
public:
    int majorityElementBasic(vector<int>& nums) {
        int n = nums.size();
        int index;
        int max_count = 0;
        for(int i=0;i<n-1;i++){
            int c = 0;
            for(int j=i+1;j<n;j++){
                if(arr[i] == arr[j]){
                    c += 1;
                }
                if(c > max_count){
                    max_count = c;
                    index = i
                }
            }
        }
        return nums[index];
    }

    int majorityElementHashing(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        for(int i=0;i<n;i++){
            m[arr[i]] += 1;
        }
        for(auto i: m){
            if(i.second > n/2){
                return i.first;
            }
        }
        return 0;
    }
    int majorityElementMooresVoting(vector<int>& nums) {
        int maj_i = 0;
        int c = 1;
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[maj_i] == a[i]){
                c += 1;
            }
            else{
                c -= 1;
            }
            if(c == 0){
                maj_i = i;
                c = 1;
            }
        }
        return a[maj_i];
    }
    bool isMajority(vector<int>& nums, int cand){
        int c = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == cand){
                c += 1;
            }
        }
        if(c > n/2){
            return 1;
        }
        return 0;
    }
    int majorityElementSortingLinearSearch(vector<int>& nums, int x) {
        int i;
        int last_index = n%2 ? (n/2+1) : (n/2);
        for(int i = 0;i<last_index;i++){
            if(nums[i] == x && nums[i+n/2] == x){
                return 1;
            }
        }
        return 0;
    }
    int majorityElementSortingBinarySearch(vector<int>& nums, int x) {
        int i = binary_search(nums.begin(), nums.end(), x);
        if(i == -1){
            return 0;
        }
        if((i + n/2) <= (n-1) && nums[i + n/2] == x){
            return 1;
        }
        return 0;
    }


};
