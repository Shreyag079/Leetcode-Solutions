class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) 
    {
        vector<int> result(nums.size());
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        { 
            if(nums[i]>0)
            {
                int k=nums[i]%nums.size();
                result[i]=nums[(i+k)%nums.size()];
            }
            else if(nums[i]<0)
            {
                int k=abs(nums[i])%nums.size();
                int idx = (i - k) % n;
                if (idx < 0)
                   idx += n;   
                result[i] = nums[idx];
            }
            else
            {
                result[i]=nums[i];
            }
        }

        return result;
    }
};