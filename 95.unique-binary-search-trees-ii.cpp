/*
 * @lc app=leetcode id=95 lang=cpp
 *
 * [95] Unique Binary Search Trees II
 *
 * https://leetcode.com/problems/unique-binary-search-trees-ii/description/
 *
 * algorithms
 * Medium (34.75%)
 * Total Accepted:    128K
 * Total Submissions: 368.4K
 * Testcase Example:  '3'
 *
 * Given an integer n, generate all structurally unique BST's (binary search
 * trees) that store values 1 ... n.
 * 
 * Example:
 * 
 * 
 * Input: 3
 * Output:
 * [
 * [1,null,3,2],
 * [3,2,null,1],
 * [3,1,null,null,2],
 * [2,1,3],
 * [1,null,2,null,3]
 * ]
 * Explanation:
 * The above output corresponds to the 5 unique BST's shown below:
 * 
 * ⁠  1         3     3      2      1
 * ⁠   \       /     /      / \      \
 * ⁠    3     2     1      1   3      2
 * ⁠   /     /       \                 \
 * ⁠  2     1         2                 3
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
    vector<TreeNode*> generateTrees(int n) {

        vector<TreeNode*> res;
        if(n==1)
        {
            TreeNode *root=new TreeNode(1);
               
            res.push_back(root);
            return res;
        }
        for(int i=1;i<=n;i++)
        {

            vector<TreeNode*> left=generateTrees(1,i-1);
            vector<TreeNode*> right=generateTrees(i+1,n);
            for(TreeNode* l:left)
            {
                for(TreeNode* r:right)
                {
                      TreeNode *root=new TreeNode(i);
                root->left=l;
                root->right=r;
                res.push_back(root);
                }
              
            }
            
            
       
        }
        return res;
        
    }

    vector<TreeNode*> generateTrees(int left,int right) 
    {
 
        vector<TreeNode*> res;
        if(left>right)
         {
            TreeNode *root=NULL;
               
            res.push_back(root);
            return res;
        }
        if(left==right)
        {
            TreeNode *root=new TreeNode(left);
               
            res.push_back(root);
            return res;
        }
        for(int i=left;i<=right;i++)
        {

            vector<TreeNode*> lefts=generateTrees(left,i-1);
            vector<TreeNode*> rights=generateTrees(i+1,right);
            for(TreeNode* l:lefts)
            {
                for(TreeNode* r:rights)
                {
                     TreeNode *root=new TreeNode(i);
                root->left=l;
                root->right=r;
                res.push_back(root);
                }
               
            }
            
       
        }
        return res;
    }
};

