class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) 
    {
        int n = nums.size();
        vector<int> res;
        vector<int> freq(101, 0);

        for (int i = 0; i < n; i++) 
        {
            freq[nums[i] + 50]++;

            if (i >= k) 
            {
                freq[nums[i - k] + 50]--;
            }

            if (i >= k - 1) 
            {
                int cnt = 0;
                int beauty = 0;
                for (int v = 0; v < 50; v++) 
                { 
                    cnt += freq[v];
                    if (cnt >= x) 
                    {
                        beauty = v - 50;
                        break;
                    }
                }
                
                res.push_back(beauty);
            }
        }

        return res;
        
    }
};