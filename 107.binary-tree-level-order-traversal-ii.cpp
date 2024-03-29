/*
 * @lc app=leetcode id=107 lang=cpp
 *
 * [107] Binary Tree Level Order Traversal II
 *
 * https://leetcode.com/problems/binary-tree-level-order-traversal-ii/description/
 *
 * algorithms
 * Easy (45.54%)
 * Total Accepted:    208.1K
 * Total Submissions: 457K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * Given a binary tree, return the bottom-up level order traversal of its
 * nodes' values. (ie, from left to right, level by level from leaf to root).
 * 
 * 
 * For example:
 * Given binary tree [3,9,20,null,null,15,7],
 * 
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 
 * 
 * 
 * return its bottom-up level order traversal as:
 * 
 * [
 * ⁠ [15,7],
 * ⁠ [9,20],
 * ⁠ [3]
 * ]
 * 
 * 
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
    vector<vector<int>> res;

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         levelOrder(root,0);
         reverse(res.begin(),res.end());
         return res;
    }

    void levelOrder(TreeNode* root,int level)
    {
        if (root==NULL)
        {
            return;
        }
        
        if (level==res.size())
        {
            vector<int> v;
            res.push_back(v);
            /* code */
        }
        res[level].push_back(root->val);
        levelOrder(root->left,level+1);
        levelOrder(root->right,level+1);
        
    }
};
