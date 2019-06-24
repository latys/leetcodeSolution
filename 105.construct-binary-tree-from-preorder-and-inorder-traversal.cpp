/*
 * @lc app=leetcode id=105 lang=cpp
 *
 * [105] Construct Binary Tree from Preorder and Inorder Traversal
 *
 * https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/
 *
 * algorithms
 * Medium (39.71%)
 * Total Accepted:    204.3K
 * Total Submissions: 514.5K
 * Testcase Example:  '[3,9,20,15,7]\n[9,3,15,20,7]'
 *
 * Given preorder and inorder traversal of a tree, construct the binary tree.
 * 
 * Note:
 * You may assume that duplicates do not exist in the tree.
 * 
 * For example, given
 * 
 * 
 * preorder = [3,9,20,15,7]
 * inorder = [9,3,15,20,7]
 * 
 * Return the following binary tree:
 * 
 * 
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int start=0;
        TreeNode* root=buildTree(preorder,start,inorder,0,inorder.size()-1);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder,int &start, vector<int>& inorder,int start1,int end1) {
        TreeNode* root=NULL;
 
        if(preorder.size()>start)
        {
            vector<int>::iterator it=find(inorder.begin()+start1,inorder.begin()+end1+1,preorder[start]);
            if(it!=inorder.begin()+end1+1) 
            {
                 root=new TreeNode(preorder[start]);
                 start=start+1;
                 root->left=buildTree(preorder,start,inorder,start1,it-inorder.begin()-1);
                 root->right=buildTree(preorder,start,inorder,it-inorder.begin()+1,end1);

            }

        }
          

        return root;
    }
};

