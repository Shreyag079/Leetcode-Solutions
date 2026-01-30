class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) 
    {
        int mn = INT_MAX;
        int mx = INT_MIN;

        for (int x : nums) 
        {
            mn = min(mn, x);
            mx = max(mx, x);
        }

        return max(0, (mx - mn) - 2 * k);
    }
};