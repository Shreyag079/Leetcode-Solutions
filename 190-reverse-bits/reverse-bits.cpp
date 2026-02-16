class Solution {
public:
    int reverseBits(int n) 
    {
        int res=0;
        for(int i=0;i<32;i++)
        {
            res<<=1;
            int b=n&1;
            res=res|b;
            n>>=1;
        }

        return res;
    }
};