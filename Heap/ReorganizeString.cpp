struct Compare
{
    bool operator()(const pair<int, char> &a, const pair<int, char> &b) const
    {
        return a.first < b.first;
    }
};

class Solution
{
public:
    string reorganizeString(string s)
    {
        unordered_map<char, int> freq;
        for (char ch : s)
        {
            freq[ch]++;
        }

        priority_queue<pair<int, char>, vector<pair<int, char>>, Compare> maxHeap;

        for (const auto &entry : freq)
        {
            maxHeap.push({entry.second, entry.first});
        }

        string result;
        pair<int, char> prev = {0, '#'};

        while (!maxHeap.empty())
        {
            auto current = maxHeap.top();
            maxHeap.pop();

            result += current.second;

            if (prev.first > 0)
            {
                maxHeap.push(prev);
            }

            prev = {current.first - 1, current.second};
        }

        return result.size() == s.size() ? result : "";
    }
};