/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input array is sorted
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int len=numbers.size();
        if (len<=1)
        {
            return res;
        }
        for (size_t i = 0; i < len-1; i++)
        {
            int num1=numbers[i];
            if (num1>target)
            {
                return res;
            }
            for (size_t j = i+1; j < len; j++)
            {
                int num2=numbers[j];
              

                if (num1+num2==target)
                {
                    res.push_back(i+1);
                    res.push_back(j+1);
                    return res;
                }
                if (num1+num2>target)
                {
                   break;
                }
                
                
                
            }
            
            
        }
        return res;
        
    }
};

