/*
 * @lc app=leetcode id=144 lang=cpp
 *
 * [144] Binary Tree Preorder Traversal
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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> tmp;
        vector<int> res;
        if(root!=NULL)
        {
            res.push_back(root->val);
            tmp.push(root->right);
            tmp.push(root->left);
        }

        while(!tmp.empty())
        {
            TreeNode *tn=tmp.top();
            tmp.pop();
            if(tn!=NULL)
            {
                 res.push_back(tn->val);
            tmp.push(tn->right);
            tmp.push(tn->left);
            }
        }

        return res;
    }
};

