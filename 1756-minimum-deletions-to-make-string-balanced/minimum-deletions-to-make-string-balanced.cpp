class Solution {
public:
    int minimumDeletions(string s) 
    {
        int n=s.size();
        int del=0;
        int countB=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='b')
            {
                countB++;
            }
            else
            {
                del=min(del+1,countB);
            }
        }

        return del;
    }
};