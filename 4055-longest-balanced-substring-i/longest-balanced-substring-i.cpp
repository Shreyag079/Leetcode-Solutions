class Solution {
public:
    int longestBalanced(string s) 
    {
        int n=s.size();
        int maxx=0;
        for(int i = 0; i < n; i++)
        {
            unordered_map<char,int> m;
            int maxFreq = 0;

            for(int j = i; j < n; j++)
            {
                m[s[j]]++;
                maxFreq = max(maxFreq, m[s[j]]);

                int length = j - i + 1;

                if(length == m.size() * maxFreq)
                {
                    maxx = max(maxx, length);
                }
            }
        }

        return maxx;
    }
};