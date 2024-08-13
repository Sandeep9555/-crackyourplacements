class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> v;
        int row = matrix.size();
        int col = matrix[0].size();
        int srtrow = 0;
        int endrow = row - 1;
        int srtcol = 0;
        int endcol = col - 1;
        while (srtrow <= endrow && srtcol <= endcol)
        {
            for (int i = srtcol; i <= endcol; i++)
            {
                v.push_back(matrix[srtrow][i]);
            }
            srtrow++;
            for (int j = srtrow; j <= endrow; j++)
            {
                v.push_back(matrix[j][endcol]);
            }
            endcol--;
            if (srtrow <= endrow)
            {
                for (int i = endcol; i >= srtcol; i--)
                {
                    v.push_back(matrix[endrow][i]);
                }
                endrow--;
            }
            if (srtcol <= endcol)
            {
                for (int j = endrow; j >= srtrow; j--)
                {
                    v.push_back(matrix[j][srtcol]);
                }
                srtcol++;
            }
        }
        return v;
    }
};