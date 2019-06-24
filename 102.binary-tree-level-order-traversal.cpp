/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode *> q;
        queue<TreeNode *> level;
        level.push(root);
       
        while(!level.empty())
        {
             while(!level.empty())
             {
                  TreeNode *t=level.front();
                  q.push(t);
                  level.pop();
             }
             if (!q.empty()) {
                vector<int> v;
                while(!q.empty())
                {
                    
                    TreeNode *t=q.front();
                    if (t!=NULL) {
                        v.push_back (t->val);
                        level.push(t->left);
                        level.push(t->right);
                    }
                    q.pop();
                
                
                }
                if(!v.empty())
                {
                    res.push_back(v);
                }
                
             }
             
            
        }
       return res;
    }
};

