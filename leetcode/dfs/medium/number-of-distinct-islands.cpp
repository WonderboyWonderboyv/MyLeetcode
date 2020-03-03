class Solution {
public:
    void dfs(vector<vector<int>>& grid, int basei, int basej, int i, int j, vector<pair<int, int>>& v){
        int rowMoves[] = {1, 0, -1, 0};
        int colMoves[] = {0, -1, 0, 1};
        grid[i][j] = 0;
        v.push_back({i - basei, j - basej});
        for(int k=0;k<4;k++){
            if(i+rowMoves[k]>=0 && i+rowMoves[k]<grid.size() && j+colMoves[k]>=0 && j+colMoves[k]<grid[i].size() && grid[i+rowMoves[k]][j+colMoves[k]] == 1){
                dfs(grid, basei, basej, i+rowMoves[k], j+colMoves[k], v);
            }
        }
    }
    int numDistinctIslands(vector<vector<int>>& grid) {
        if(grid.size() == 0){
            return 0;
        }
        if(grid[0].size() == 0){
            return 0;
        }
        set<vector<pair<int, int>>> s;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j] == 1){
                    vector<pair<int, int>> v;
                    dfs(grid, i, j, i, j, v);
                    s.insert(v);
                }
            }
        }
        return s.size();
    }
};
