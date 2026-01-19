class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int left=0;
        int maxx=0;
        int ans=0;
        vector<int> freq(26,0);
        for(int right=0;right<s.size();right++)
        {
            freq[s[right]-'A']++;
            maxx=max(maxx,freq[s[right]-'A']);

            while((right-left+1)-maxx > k)
            {
                freq[s[left]-'A']--;
                left++;
            }

            ans=max(ans,right-left+1);
        }

        return ans;
    }
};