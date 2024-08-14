class Solution
{
public:
    int countless(vector<vector<int>> &matrix, int mid)
    {
        int r = matrix.size();
        int c = matrix[0].size();
        int count = 0;
        int row = r - 1;
        int col = 0;

        while (row >= 0 && col < c)
        {
            if (matrix[row][col] <= mid)
            {
                count += (row + 1);
                col++;
            }
            else
            {
                row--;
            }
        }

        return count;
    }

    int kthSmallest(vector<vector<int>> &matrix, int k)
    {
        int r = matrix.size();
        int c = matrix[0].size();
        int start = matrix[0][0];
        int end = matrix[r - 1][c - 1];

        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (countless(matrix, mid) < k)
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }

        return start;
    }
};