class Solution {
public:
    int countBinarySubstrings(string s) 
    {
        int prev=0;
        int cur=1;
        int res=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            {
                cur++;
            }
            else
            {
                res+=min(cur,prev);
                prev=cur;
                cur=1;
            }
        }

        res+=min(cur,prev);
        return res;
    }
};