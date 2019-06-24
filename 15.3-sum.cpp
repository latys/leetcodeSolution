/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 *
 * https://leetcode.com/problems/3sum/description/
 *
 * algorithms
 * Medium (23.33%)
 * Total Accepted:    481K
 * Total Submissions: 2.1M
 * Testcase Example:  '[-1,0,1,2,-1,-4]'
 *
 * Given an array nums of n integers, are there elements a, b, c in nums such
 * that a + b + c = 0? Find all unique triplets in the array which gives the
 * sum of zero.
 * 
 * Note:
 * 
 * The solution set must not contain duplicate triplets.
 * 
 * Example:
 * 
 * 
 * Given array nums = [-1, 0, 1, 2, -1, -4],
 * 
 * A solution set is:
 * [
 * ⁠ [-1, 0, 1],
 * ⁠ [-1, -1, 2]
 * ]
 * 
 * 
 */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

         int len=nums.size();
        vector<vector<int > > res;
        if(len<3)
           return res;
        sort(nums.begin(),nums.end());
        int i,j,k;
       
           
      
        for(i=0;i<nums.size()-2;i++)
        {
            int fix=nums.at(i);
            if(i>0&&nums.at(i)==nums.at(i-1))
            {
                continue;
            }
            int target=0-fix;
            j=i+1;
            k=len-1;
            while(j<k)
            {
                if(nums.at(j)+nums.at(k)==target)
                {
                       if(j>i+1&&nums.at(j)==nums.at(j-1))
                        {
                            j++;
                            continue;
                        }
                    vector<int> tmp;
                    tmp.push_back(fix);
                    tmp.push_back(nums.at(j));
                    tmp.push_back(nums.at(k));
                    res.push_back(tmp);
                    k--;
                    j++;
                    
                }
                else if(nums.at(j)+nums.at(k)>target)
                {
                    k--;
                }
                else
                {
                    j++;
                }
                
            }
        }

        return res;
    }
};

