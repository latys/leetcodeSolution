/*
 * @lc app=leetcode id=188 lang=cpp
 *
 * [188] Best Time to Buy and Sell Stock IV
 */
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int len=prices.size();
        if (len<2)
        {
           return 0;
        }
        vector<int> profit;
        int start=prices[0];
        int end=start;
        for (size_t i = 1; i < prices.size(); i++)
        {
            if (prices[i]<end)
            {
               
                if (end-start>0)
                {
                    profit.push_back(end-start);
                }

                start=prices[i];
                end=start;
                
            }
            else
            {
                end=prices[i];
            }
            
            
        }
        if (end-start>0&&end==prices[len-1])
        {
            profit.push_back(end-start);
        }

        if (profit.size()==0)
        {
            return 0;
        }
        

        sort(profit.begin(),profit.end(),[](int a,int b){return a>b;});

        int maxprofit=0;
        for (size_t i = 0; i < k; i++)
        {
            if (profit.size()-1>=i)
            {
                maxprofit+=profit[i];
            }
            
            
        }

        return maxprofit;
        
        
    }
};

