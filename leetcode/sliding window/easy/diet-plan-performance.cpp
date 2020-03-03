class Solution {
public:
    int dietPlanPerformanceBrute(vector<int>& calories, int k, int lower, int upper) {
        int n = calories.size();
        int points = 0;
        for(int i=0;i<n-k;i++){
            int calorieSum = 0;
            for(int j=i;j<i+k;j++){
                calorieSum += calories[j];
            }
            if(calorieSum < lower){
                points -= 1;
            }
            else if(calorieSum > upper){
                points += 1;
            }
        }
        return points;
    }
    int dietPlanPerformanceBrute(vector<int>& calories, int k, int lower, int upper) {
        int n = calories.size();
        int points = 0;
        for(int i=0;i<n-k;i++){
            int calorieSum = 0;
            for(int j=i;j<i+k;j++){
                calorieSum += calories[j];
            }
            if(calorieSum < lower){
                points -= 1;
            }
            else if(calorieSum > upper){
                points += 1;
            }
        }
        return points;
    }
};
