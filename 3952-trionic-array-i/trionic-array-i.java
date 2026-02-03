class Solution 
{
    public boolean isTrionic(int[] nums) 
    {
        int pos1=0,pos2=0,pos3=nums.length;

        for(int i=1;i<nums.length;i++)
        {
            if(nums[i]<=nums[i-1] || i==nums.length-1)
            {
                pos1=i-1;
                break;
            }
        }

        if(pos1==0)
            return false;

        for(int i=pos1+1;i<nums.length;i++)
        {
            if(nums[i]>=nums[i-1] || i==nums.length-1)
            {
                pos2=i-1;
                break;
            }
        }

        for(int i=pos2+1;i<nums.length;i++)
        {
            if(nums[i]<=nums[i-1])
            {
                pos3=i;
                break;
            }
        }

        if(pos1==pos2 || pos2==pos3 || pos3!=nums.length)
            return false;

        return true;        
    }
}