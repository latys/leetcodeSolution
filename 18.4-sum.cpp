/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 *
 * https://leetcode.com/problems/4sum/description/
 *
 * algorithms
 * Medium (29.65%)
 * Total Accepted:    211.6K
 * Total Submissions: 713.4K
 * Testcase Example:  '[1,0,-1,0,-2,2]\n0'
 *
 * Given an array nums of n integers and an integer target, are there elements
 * a, b, c, and d in nums such that a + b + c + d = target? Find all unique
 * quadruplets in the array which gives the sum of target.
 * 
 * Note:
 * 
 * The solution set must not contain duplicate quadruplets.
 * 
 * Example:
 * 
 * 
 * Given array nums = [1, 0, -1, 0, -2, 2], and target = 0.
 * 
 * A solution set is:
 * [
 * ⁠ [-1,  0, 0, 1],
 * ⁠ [-2, -1, 1, 2],
 * ⁠ [-2,  0, 0, 2]
 * ]
 * 
 * 
 */
class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {

//            int len=nums.size();
//         vector<vector<int > > res;
//         if(len<4)
//            return res;
//         sort(nums.begin(),nums.end());
//         int i,j,k,l;
       
           
      
//         for(i=0;i<nums.size()-3;i++)
//         {
//                if(i>0&&nums.at(i)==nums.at(i-1))
//             {
//                 continue;
//             }
//             for(l=i+1;l<len-2;l++)
//             {
//              int fix=nums.at(i)+nums.at(l);
//             if(l>1&&nums.at(l)==nums.at(l-1))
//             {
//                 continue;
//             }
//             int target=0-fix;
//             j=l+1;
//             k=len-1;
//             while(j<k)
//             {
//                 if(nums.at(j)+nums.at(k)==target)
//                 {
//                        if(j>l+1&&nums.at(j)==nums.at(j-1))
//                         {
//                             j++;
//                             continue;
//                         }
//                     vector<int> tmp;
//                     tmp.push_back(nums.at(i));
//                     tmp.push_back(nums.at(l));
//                     tmp.push_back(nums.at(j));
//                     tmp.push_back(nums.at(k));
//                     res.push_back(tmp);
//                     k--;
//                     j++;
                    
//                 }
//                 else if(nums.at(j)+nums.at(k)>target)
//                 {
//                     k--;
//                 }
//                 else
//                 {
//                     j++;
//                 }
                
//             }
//             }
    
//         }

//         return res;
        
//     }
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 3; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for (int j = i + 1; j < n - 2; ++j) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                int left = j + 1, right = n - 1;
                while (left < right) {
                    int sum = nums[i] + nums[j] + nums[left] + nums[right];
                    if (sum == target) {
                        vector<int> out{nums[i], nums[j], nums[left], nums[right]};
                        res.push_back(out);
                        while (left < right && nums[left] == nums[left + 1]) ++left;
                        while (left < right && nums[right] == nums[right - 1]) --right;
                        ++left; --right;
                    } else if (sum < target) ++left;
                    else --right;
                }
            }
        }
        return res;
    }
};

