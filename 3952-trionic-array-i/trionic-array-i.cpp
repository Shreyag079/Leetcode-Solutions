class Solution {
public:
    bool isTrionic(vector<int>& nums) 
    {
        int n = nums.size();
        int i = 1;

        
        while (i < n && nums[i] > nums[i - 1]) 
        {
            i++;
        }
        int p = i - 1;
        if (p == 0) 
           return false;  
        if (i == n) return false;

        
        while (i < n && nums[i] < nums[i - 1]) 
        {
            i++;
        }
        int q = i - 1;
        if (q == p) 
           return false;  
        if (i == n) return false;

        
        while (i < n && nums[i] > nums[i - 1]) 
        {
            i++;
        }

        return i == n;
    }
};