class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int n = digits.size();
        int carry = 1;
        int digit;
        do{
            digit = digits[n-1] + carry;
            carry = (digit > 9)? 1 : 0;
            ans.push_back(digit%10);
            n--;
        }while(n);
        if(carry){
            ans.push_back(1);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
