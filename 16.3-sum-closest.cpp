/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 *
 * https://leetcode.com/problems/3sum-closest/description/
 *
 * algorithms
 * Medium (39.84%)
 * Total Accepted:    279.6K
 * Total Submissions: 701.6K
 * Testcase Example:  '[-1,2,1,-4]\n1'
 *
 * Given an array nums of n integers and an integer target, find three integers
 * in nums such that the sum is closest to target. Return the sum of the three
 * integers. You may assume that each input would have exactly one solution.
 * 
 * Example:
 * 
 * 
 * Given array nums = [-1, 2, 1, -4], and target = 1.
 * 
 * The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
 * 
 * 
 */
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       int len=nums.size();
       int  res=0;
        if(len<3)
           return res;
        sort(nums.begin(),nums.end());
        int i,j,k;
       
           
        res=nums[0]+nums[1]+nums[2];
        for(i=0;i<nums.size()-2;i++)
        {
            int fix=nums.at(i);
            if(i>0&&nums.at(i)==nums.at(i-1))
            {
                continue;
            }
            int target1=target-fix;
            j=i+1;
            k=len-1;
            while(j<k)
            {
                if(nums.at(j)+nums.at(k)==target1)
                {
                    return target;
                    
                }
                else if(nums.at(j)+nums.at(k)>target1)
                {
                    if(abs(res-target)>abs(fix+nums.at(j)+nums.at(k)-target))
                       res=nums.at(j)+nums.at(k)+fix;
                    k--;
                }
                else
                {
                    if(abs(res-target)>abs(fix+nums.at(j)+nums.at(k)-target))
                       res=nums.at(j)+nums.at(k)+fix;
                    j++;
                }
                
            }
        }

        return res;
        
    }
};

