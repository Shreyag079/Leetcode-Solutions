class Solution {
public:
    int totalMoney(int n) 
    {
        int week = n / 7;    
        int days = n % 7;     
    
        int total = 0;
        for (int i = 0; i < week; i++) 
        {
            total += 7 * (i + 1) + 21;
        }
    
    
        int start = week + 1;
        for (int i = 0; i < days; i++) 
        {
            total += start + i;
        }
        
       return total;
    }
};