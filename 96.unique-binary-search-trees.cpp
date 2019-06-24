/*
 * @lc app=leetcode id=96 lang=cpp
 *
 * [96] Unique Binary Search Trees
 *
 * https://leetcode.com/problems/unique-binary-search-trees/description/
 *
 * algorithms
 * Medium (45.64%)
 * Total Accepted:    192K
 * Total Submissions: 420.6K
 * Testcase Example:  '3'
 *
 * Given n, how many structurally unique BST's (binary search trees) that store
 * values 1 ... n?
 * 
 * Example:
 * 
 * 
 * Input: 3
 * Output: 5
 * Explanation:
 * Given n = 3, there are a total of 5 unique BST's:
 * 
 * ⁠  1         3     3      2      1
 * ⁠   \       /     /      / \      \
 * ⁠    3     2     1      1   3      2
 * ⁠   /     /       \                 \
 * ⁠  2     1         2                 3
 * 
 * 
 */
class Solution {
public:
    int numTrees(int n) {
        

        vector<TreeNode*> res;
        if(n==1)
        {
            1
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
        return res.size();
        
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

