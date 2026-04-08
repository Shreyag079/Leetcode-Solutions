class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) 
    {
        int n=nums.size();
        int q=queries.size();
        const int MOD = 1000000007;
        int res=0;
        for(auto& m:queries)
        {
            int l=m[0];
            int r=m[1];
            int k=m[2];
            int v=m[3];
            int i=l;
            while(i<=r)
            {
                nums[i]=(1LL*nums[i]*v)%MOD;
                i=i+k;
            }
        }

        for(int num:nums)
        {
            res^=num;
        }

        return res;
    }
};