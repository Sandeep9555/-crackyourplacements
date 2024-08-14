class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> ans = image;
        int tarColor = image[sr][sc];

        if (tarColor == color)
            return ans;

        queue<pair<int, int>> q;
        q.push({sr, sc});
        ans[sr][sc] = color;

        while (!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for (int drow = -1; drow <= 1; drow++)
            {
                for (int dcol = -1; dcol <= 1; dcol++)
                {
                    if (abs(drow) + abs(dcol) == 1)
                    {
                        int nrow = row + drow;
                        int ncol = col + dcol;

                        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == tarColor && ans[nrow][ncol] != color)
                        {
                            ans[nrow][ncol] = color;
                            q.push({nrow, ncol});
                        }
                    }
                }
            }
        }
        return ans;
    }
};