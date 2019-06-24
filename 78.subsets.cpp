/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> out;
        vector<vector<int> > res;
        sort(nums.begin(),nums.end());
        subsets(nums,0,out,res);
        return res;
    }

    void subsets(vector<int>& nums,int start,vector<int>& out,vector<vector<int>>& res) {
      
        res.push_back(out);
        for (int i = start; i <nums.size();i++)
        {
            out.push_back(nums[i]);
            subsets(nums,i+1,out,res);
            out.pop_back();
        }
        
        
    }
};

