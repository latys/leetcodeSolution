/*
 * @lc app=leetcode id=113 lang=cpp
 *
 * [113] Path Sum II
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> out;
        vector<vector<int>> res;
        pathSum(root,sum,out,res);
        return res;
    }

  void pathSum(TreeNode* root, int sum,vector<int> &out,vector<vector<int>> &res) {
        if(root==NULL)
          return;
        out.push_back(root->val);
        if(root->val==sum&&root->left==NULL&&root->right==NULL)
        {
            res.push_back(out);
        }
        pathSum(root->left,sum-root->val,out,res);
        pathSum(root->right,sum-root->val,out,res);

        out.pop_back();
    }
};

