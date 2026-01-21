class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
              nums[i]*=-1;
            
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[i]*nums[i]);
        }
       
       return ans;
    }
};