void dfs(int row, int col, vector<vector<char>> &grid, vector<vector<bool>> &vis)
{
    vis[row][col] = true;

    vector<int> dir = {0, 0, -1, 1, -1, -1, 1, 1};
    vector<int> dic = {-1, 1, 0, 0, -1, 1, -1, 1};

    int n = grid.size();
    int m = grid[0].size();

    for (int i = 0; i < 8; i++)
    {
        int nrow = row + dir[i];
        int ncol = col + dic[i];

        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1' && !vis[nrow][ncol])
        {
            dfs(nrow, ncol, grid, vis);
        }
    }
}

int numIslands(vector<vector<char>> &grid)
{
    if (grid.empty() || grid[0].empty())
        return 0;

    int row = grid.size();
    int col = grid[0].size();
    int count = 0;
    vector<vector<bool>> vis(row, vector<bool>(col, false));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (grid[i][j] == '1' && !vis[i][j])
            {
                dfs(i, j, grid, vis);
                count++;
            }
        }
    }

    return count;
}