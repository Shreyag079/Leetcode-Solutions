class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int> temp;
        temp=nums;
        vector<int> res;
        sort(temp.begin(),temp.end());
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(temp[i]) == m.end())
            {
                m[temp[i]]=i;
            }
        }

        for(int x:nums)
        {
            res.push_back(m[x]);
        }

        return res;
    }
};