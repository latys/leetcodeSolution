/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
 *
 * https://leetcode.com/problems/symmetric-tree/description/
 *
 * algorithms
 * Easy (42.63%)
 * Total Accepted:    355.9K
 * Total Submissions: 835K
 * Testcase Example:  '[1,2,2,3,4,4,3]'
 *
 * Given a binary tree, check whether it is a mirror of itself (ie, symmetric
 * around its center).
 * 
 * 
 * For example, this binary tree [1,2,2,3,4,4,3] is symmetric:
 * 
 * ⁠   1
 * ⁠  / \
 * ⁠ 2   2
 * ⁠/ \ / \
 * 3  4 4  3
 * 
 * 
 * 
 * But the following [1,2,2,null,3,null,3]  is not:
 * 
 * ⁠   1
 * ⁠  / \
 * ⁠ 2   2
 * ⁠  \   \
 * ⁠  3    3
 * 
 * 
 * 
 * 
 * Note:
 * Bonus points if you could solve it both recursively and iteratively.
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
    bool isSymmetric(TreeNode* root) {
         if(root!=NULL)
         {
             return isSymmetric(root->left,root->right);
         }
         return true;
        
    }

      bool isSymmetric(TreeNode* p1,TreeNode* p2) {
        if(p1!=NULL&&p2!=NULL)
        {
            return (p1->val==p2->val)&&isSymmetric(p1->left,p2->right)&&isSymmetric(p1->right,p2->left);
        }
        else if(p1==NULL&&p2==NULL)
        {
            return true;
        }
        else{
            return false;
        }
        
    }

   
};
