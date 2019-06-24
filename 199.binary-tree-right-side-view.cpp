/*
 * @lc app=leetcode id=199 lang=cpp
 *
 * [199] Binary Tree Right Side View
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
    vector<int> rightSideView(TreeNode* root) {

        vector<int> res;
        queue<TreeNode*> level;
        queue<TreeNode*> tmp;
        level.push(root);

        while(!level.empty())
        {
            while(!level.empty())
            {
                TreeNode* node=level.front();
                tmp.push(node);
                level.pop();
                
            }
            TreeNode* right=NULL;
            while(!tmp.empty())
            {
                TreeNode* node=tmp.front();
                if (node!=NULL)
                {
                    level.push(node->left);
                    level.push(node->right);
                    right=node;
                }
                tmp.pop();
                
            }
            if (right!=NULL)
            {
                res.push_back(right->val);
            }
            
            
        }

        return res;
    }
};

