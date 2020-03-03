class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j){
        int rowMoves[] = {1, 0, -1, 0};
        int colMoves[] = {0, -1, 0, 1};
        grid[i][j] = '0';
        for(int k=0;k<4;k++){
            if(i+rowMoves[k]>=0 && i+rowMoves[k]<grid.size() && j+colMoves[k]>=0 && j+colMoves[k]<grid[i].size() && grid[i+rowMoves[k]][j+colMoves[k]] == '1'){
                dfs(grid, i+rowMoves[k], j+colMoves[k]);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int numberOfIslands = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j] == '1'){
                    dfs(grid, i, j);
                    numberOfIslands += 1;
                }
            }
        }
        return numberOfIslands;
    }
};
