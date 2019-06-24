/*
 * @lc app=leetcode id=135 lang=cpp
 *
 * [135] Candy
 */
class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> v(ratings.size());
        for (size_t i = 0; i < ratings.size(); i++)
        {
            if (i==0)
            {
                v[i]=1;
            }
            else
            {
                if(ratings[i]>ratings[i-1])
                {
                    v[i]=v[i-1]+1;
                }
                else
                {
                    v[i]=1;
                }
                
            }

        }

        for (int i = ratings.size()-2; i >=0; i--)
        {

                if(ratings[i]>ratings[i+1]&&v[i]<=v[i+1])
                {
                    v[i]=v[i+1]+1;
                }

        }
        
        
         int sum=0;
         for (int s:v)
         {
             sum+=s;
         }
         
         return sum;
    }
};

