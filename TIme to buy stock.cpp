class Solution {
public:
   int maxProfit(vector<int>& prices) {
        int n=prices.size();

        
        
        int mini=prices[0];
        int maxp=0;
        for(int i=0;i<n;i++)
        {
            if(mini<prices[i])
            {
                maxp=max(maxp,prices[i]-mini);
            }
            else 
                mini=prices[i];
            
        }
        return maxp;
    }
};

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/
