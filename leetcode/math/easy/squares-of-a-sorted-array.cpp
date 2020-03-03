class Solution {
public:
    vector<int> sortedSquaresUsingSorting(vector<int>& A) {
        int temp;
        for(int i=0;i<A.size();i++){
            temp = A[i] * A[i];
            A[i] = temp;
        }
        sort(A.begin(), A.end());
        return A;
    }
    vector<int> sortedSquaresTwoPointers(vector<int>& A) {
        int n = A.size();
        int i = 0;
        vector<int> ans;
        while(i < n && A[i] < 0){
            i++;
        }
        int j = i - 1;
        while(i<n && j>=0){
            if(A[i]*A[i] < A[j]*A[j]){
                ans.push_back(A[i] * A[i]);
                i++;
            }
            else{
                ans.push_back(A[j] * A[j]);
                j--;
            }
        }
        while(j>=0){
            ans.push_back(A[j] * A[j]);
            j--;
        }
        while(i<n){
            ans.push_back(A[i] * A[i]);
            i++;
        }
        return ans;
    }
};
