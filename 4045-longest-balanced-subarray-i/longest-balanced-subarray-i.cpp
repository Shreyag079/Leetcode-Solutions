class Solution {
public:
    int longestBalanced(vector<int>& nums) 
    {
        int n = nums.size();
        int maxx = 0;

        for (int i = 0; i < n; i++)
        {
            unordered_set<int> s;
            int odd = 0;
            int even = 0;

            for (int j = i; j < n; j++)
            {
                if (!s.count(nums[j]))
                {
                    s.insert(nums[j]);

                    if (abs(nums[j]) % 2 == 0)
                        even++;
                    else
                        odd++;
                }

                if (even == odd)
                    maxx = max(maxx, j - i + 1);
            }
        }

        return maxx;
    }
};
