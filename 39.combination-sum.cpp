/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> out;
        int count=candidates.size();
        combinationSum(candidates,0,target,out,res);
        return res;
        
        
    }

    void combinationSum(vector<int>& candidates,int start, int target,vector<int>& out,vector<vector<int>>& res) {
       if (target<0)
       {
           return;
       }
       
        if (target==0)
        {
            res.push_back(out);
            return;
        }

        for (size_t i = start; i < candidates.size(); i++)
        {
            out.push_back(candidates[i]);
            combinationSum(candidates,i,target-candidates[i],out,res);

            out.pop_back();
        }
        
        
        
        
    }
};

