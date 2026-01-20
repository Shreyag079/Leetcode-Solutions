class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int maxp=0;
        int minn=prices[0];
        int p;
        
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<minn)
              minn=prices[i];
            else
            {
                p=prices[i]-minn;
                maxp=max(maxp,p);
            }
        }

        return maxp;
    }
};