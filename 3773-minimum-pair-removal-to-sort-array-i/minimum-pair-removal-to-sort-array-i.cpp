class Solution {
public:

    bool isSorted(vector<int>& nums) 
    {
        for (int i = 1; i < nums.size(); i++) 
        {
            if (nums[i] < nums[i - 1])
                return false;
        }
        return true;
    }

    int minimumPairRemoval(vector<int>& nums) 
    {
        int count=0;
        while(!isSorted(nums))
        {
            int m=INT_MAX;
            int id=0;
            for(int i=0;i<nums.size()-1;i++)
            {
                int sum=nums[i]+nums[i+1];
                if(sum<m)
                {
                    m=sum;
                    id=i;
                }

            }

            nums[id]=m;
            nums.erase(nums.begin()+id+1);
            count++;
    
        }

        return count;
    }
};