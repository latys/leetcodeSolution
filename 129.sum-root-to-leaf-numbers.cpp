/*
 * @lc app=leetcode id=129 lang=cpp
 *
 * [129] Sum Root to Leaf Numbers
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
    int sumNumbers(TreeNode* root) {
        int tmp=0;
        int res=0;
        sumNumbers(root,tmp,res);
        return res;
    }

   void  sumNumbers(TreeNode* root,int &tmp,int &res) {
        if(root==NULL)
           return;
        tmp=tmp*10+root->val;
        if(!root->left&&!root->right)
        {
            res+=tmp;
        }
        sumNumbers(root->left,tmp,res);
        sumNumbers(root->right,tmp,res);
        tmp=tmp/10;
    }
};

