class Solution {
public:
    int removeDuplicates1(vector<int>& arr) {
        int n = arr.size();
        if(n == 0){
            return 0;
        }
        int i = 0;
        for(int j=1;j<n;j++){
            if(num[i] != num[j]){
                i++;
                num[i] = num[j];
            }
        }
        return i+1;
    }
    int removeDuplicates2(vector<int>& arr) {
        unordered_set<int> s;
        int n = arr.size();
        int i = 0;
        for(int j=0;j<n;j++){
            if(s.find(arr[j]) == s.end()){
                s.insert(arr[j]);
                arr[i] = arr[j];
                i += 1;
            }
        }
        return i;
    }
};
