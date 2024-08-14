class Solution
{
public:
    int nthUglyNumber(int n)
    {
        priority_queue<long, vector<long>, greater<long>> pq;
        set<long> s;
        long count = 1;
        s.insert(count);
        pq.push(count);
        int i = 0;
        while (i < n)
        {
            count = pq.top();
            pq.pop();
            if (s.find(count * 2) == s.end())
            {
                pq.push(count * 2);
                s.insert(count * 2);
            }
            if (s.find(count * 3) == s.end())
            {
                pq.push(count * 3);
                s.insert(count * 3);
            }
            if (s.find(count * 5) == s.end())
            {
                pq.push(count * 5);
                s.insert(count * 5);
            }
            i++;
        }

        return count;
    }
};