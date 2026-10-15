class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
        int low = 0, high = 0, n = s.size();
        vector<int> res;
        vector<int> last(26, 0);

        for(int i = 0; i < n; i++)
            last[s[i] - 'a'] = i;

        int maxSoFar = 0;

        while(high < n)
        {
            maxSoFar = max(last[s[high] - 'a'], maxSoFar);

            if(last[s[high] - 'a'] == high && high >= maxSoFar)
            {
                res.push_back(high - low + 1);
                low = high + 1;
            }

            high++;
        }

        return res;
    }
};