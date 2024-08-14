class Solution
{
public:
    void bfs(int i, int j, vector<vector<char>> &grid, vector<vector<bool>> &vis)
    {
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<int, int>> pq;
        vector<int> dir = {1, -1, 0, 0};
        pq.push({i, j});
        vis[i][j] = 1;
        while (!pq.empty())
        {
            // int front=pq.front();

            int x = pq.front().first;
            int y = pq.front().second;
            pq.pop();
            for (int d = 0; d < 4; d++)
            {
                int nx = x + dir[d];
                int ny = y + dir[3 - d];
                if (nx >= 0 && nx < rows && ny >= 0 && ny < cols && !vis[nx][ny] && grid[nx][ny] == '1')
                {
                    pq.push({nx, ny});
                    vis[nx][ny] = 1;
                }
            }
        }
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        int isCount = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == '1' && !vis[i][j])
                {
                    bfs(i, j, grid, vis);
                    ++isCount;
                }
            }
        }
        return isCount;
    }
};