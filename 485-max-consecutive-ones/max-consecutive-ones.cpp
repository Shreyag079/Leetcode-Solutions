class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int maxx=0;
        int a=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                a++;
                maxx=max(maxx,a);
            }
            else
            {
                a=0;
                
            }
        }
        return maxx;
    }
};