class Solution
{
    public int minRemoval(int[] nums, int k) 
    {
        int count=Integer.MAX_VALUE;
        Arrays.sort(nums);

        for(int i=0;i<nums.length;i++)
        {
            long val = (long)nums[i]*k;

            int lb=i;
            int ub=nums.length-1;
            while(lb<=ub)
            {
                int mid = (lb+ub)/2;
                if(val>=nums[mid])
                    lb=mid+1;
                else
                    ub=mid-1;
            }

            count = Math.min(count,i+nums.length-lb);
        }

        return count;
    }
}