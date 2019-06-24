/*
 * @lc app=leetcode id=179 lang=cpp
 *
 * [179] Largest Number
 */
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](int a,int b)
        {
            string tmp1=to_string(a);
            string tmp2=to_string(b);
          

            return (tmp1+tmp2)>(tmp2+tmp1);
        });

        string res;
        for (int num:nums)
        {
            res.append(to_string(num));
        }

        int index=0;
        while(res[0] == '0' && res.length()>1)// 对特殊情况的处理
           res.erase(0,1);  
        

        return res;
        
    }
};

