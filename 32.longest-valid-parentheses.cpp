/*
 * @lc app=leetcode id=32 lang=cpp
 *
 * [32] Longest Valid Parentheses
 */
class Solution {
public:
    int longestValidParentheses(string s) {
        int len=s.size();
        if(len<=1)
          return 0;
        int **dp=new int*[len];
        int max=0;
        for(size_t i = 0; i < len; i++)
        {
            dp[i]=new int[len];
        }
        for(size_t i = 0; i < len; i++)
        {
            for(size_t j = 0; j < len; j++)
            {
                dp[i][j]=0;
            }
        }

        for(size_t j = 1; j < len; j=j+2)
        {
            for(size_t i = 0; i < len-1; i++)
            {
                if (i+j>=len) {
                    continue;
                }
                
                if(j==1)
                {
                    if (s[i]=='('&&s[i+j]==')') {
                      dp[i][i+j]=1;
                    }
                }
                else
                {
                   if ((dp[i][i+j-2]==1&&dp[i+j-1][i+j]==1)
                     ||(dp[i][i+1]==1&&dp[i+2][i+j]==1)
                     ||(dp[i+1][i+j-1]==1&&(s[i]=='('&&s[i+j]==')')))
                     {
                         dp[i][i+j]=1;
                     }
                     else
                     {
                         for(size_t k = 1; k < j+1; k=k+2)
                         {
                             if (dp[i][i+k]==1&&dp[i+k+1][i+j]) {
                                  dp[i][i+j]=1;
                                  break;
                             }
                             
                         }
                         
                     }
                     
                     
                }

                if (dp[i][i+j]==1&&j+1>max) {
                    max=j+1;
                }
           
                
                 
            }
            
        }

        return max;
   
        
    }
};

