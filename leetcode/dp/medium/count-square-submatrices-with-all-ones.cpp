class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int c = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == 1){
                    c += 1;
                }
            }
        }
        while(m>1 && n>1){
            for(int i=0;i<m-1;i++){
                for(int j=0;j<n-1;j++){
                    if(matrix[i][j] == 0 || matrix[i+1][j] == 0 || matrix[i][j+1] == 0 || matrix[i+1][j+1] == 0){
                        matrix[i][j] = 0;
                    }
                    else{
                        c += 1;
                    }
                }
            }
            m--;
            n--;
        }
        return c;
    }
};

class Solution(object):
    def countSquares(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: int
        """
        m = len(matrix)
        n = len(matrix[0])

        dp = [[0]*n for _ in range(m)]
        for i in range(m):
            for j in range(n):
                if matrix[i][j] == 1:
                    dp[i][j] = min(dp[i-1][j-1], dp[i-1][j], dp[i][j-1]) + 1
        c = 0;
        for i in range(m):
            for j in range(n):
                if dp[i][j] != 0:
                    c += dp[i][j]
        return c;
