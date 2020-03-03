class Solution {
public:
    int squareSum(int n){
        int sum = 0;
        while(n){
            sum += (n%10) * (n%10);
        }
        return sum;
    }
    bool isHappy(int n) {
        set<int> s;
        while(1){
            n = squareSum(n);
            if(n == 1){
                return true;
            }
            if(s.find(n) != s.end()){
                return false;
            }
            s.insert(n);
        }
    }
    bool isHappy(int n) {
        int slow =
    }
};
