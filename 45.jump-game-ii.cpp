/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 *
 * https://leetcode.com/problems/jump-game-ii/description/
 *
 * algorithms
 * Hard (27.75%)
 * Total Accepted:    161.3K
 * Total Submissions: 581.4K
 * Testcase Example:  '[2,3,1,1,4]'
 *
 * Given an array of non-negative integers, you are initially positioned at the
 * first index of the array.
 * 
 * Each element in the array represents your maximum jump length at that
 * position.
 * 
 * Your goal is to reach the last index in the minimum number of jumps.
 * 
 * Example:
 * 
 * 
 * Input: [2,3,1,1,4]
 * Output: 2
 * Explanation: The minimum number of jumps to reach the last index is 2.
 * ⁠   Jump 1 step from index 0 to 1, then 3 steps to the last index.
 * 
 * Note:
 * 
 * You can assume that you can always reach the last index.
 * 
 */
class Solution {
public:
    int jump(vector<int>& nums) {
        int step=0;
        int len=nums.size();
        if (len==0)
        {
            return 0;
        }
        if (len==1)
        {
            return 0;
        }
        
        int pos=0;
        int pre=0;
        int next=0;

        for (int i = 0; i < len; i++)
        {
            if (i>pre)
            {
                pre=pos;
                ++step;
            }
            pos=max(pos,i+nums[i]);
        }
        
     
        
        return step;
      
    }
};

