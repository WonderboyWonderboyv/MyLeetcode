class Solution {
public:
    int removeElement1(vector<int>& nums, int val) {
        int n = nums.size();
        int j = 0;
        for(int i=0;i<n;i++){
            if(nums[i] != val){
                j += 1;
                nums[j] = num[i];
            }
        }
        return j + 1;
    }

    int removeElement2(vector<int>& nums, int val) {
        int n = nums.size();
        while(i<n){
            if(nums[i] == val){
                nums[i] = nums[n-1];
                n--;
            }
            else{
                i++;
            }
        }
        return n;
    }
};
