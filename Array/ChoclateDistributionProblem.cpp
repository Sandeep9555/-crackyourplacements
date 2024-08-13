class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        // code
        sort(a.begin(), a.end());
        long long mindiff = LLONG_MAX;
        for (long long i = 0; i <= n - m; i++)
        {
            long long diff = a[i + m - 1] - a[i];
            mindiff = min(mindiff, diff);
        }
        return mindiff;
    }
};