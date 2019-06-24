/*
 * @lc app=leetcode id=112 lang=cpp
 *
 * [112] Path Sum
 *
 * https://leetcode.com/problems/path-sum/description/
 *
 * algorithms
 * Easy (37.08%)
 * Total Accepted:    288.6K
 * Total Submissions: 778.3K
 * Testcase Example:  '[5,4,8,11,null,13,4,7,2,null,null,null,1]\n22'
 *
 * Given a binary tree and a sum, determine if the tree has a root-to-leaf path
 * such that adding up all the values along the path equals the given sum.
 * 
 * Note: A leaf is a node with no children.
 * 
 * Example:
 * 
 * Given the below binary tree and sum = 22,
 * 
 * 
 * ⁠     5
 * ⁠    / \
 * ⁠   4   8
 * ⁠  /   / \
 * ⁠ 11  13  4
 * ⁠/  \      \
 * 7    2      1
 * 
 * 
 * return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.
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
    bool hasPathSum(TreeNode* root, int sum) {
         return hasPathSum(root,sum,0);
    }

        bool hasPathSum(TreeNode* root, int sum,int level) {
         if(root==NULL)
         {
             if(level==0)
             return false;
             else
             {
             if(sum==0)
                return true;
             else 
                return false;
             }
             
            
         }
         else
         {
             if(root->left==NULL&&root->right!=NULL)
             {
                return hasPathSum(root->right,sum-root->val,level+1);
             }
             else if(root->left!=NULL&&root->right==NULL)
             {
                 return hasPathSum(root->left,sum-root->val,level+1);
             }
             else
             {
                  return hasPathSum(root->left,sum-root->val,level+1)||hasPathSum(root->right,sum-root->val,level+1);

             }
             
                
         }
    }
};

