class Solution {
public:
    int buyChoco(vector<int>& prices, int money) 
    {
        sort(prices.begin(),prices.end());

        int a=prices[0]+prices[1];
        if(money-a>=0)
          return money-a;
        else
          return money;
    }
};