/*
 * @lc app=leetcode id=106 lang=cpp
 *
 * [106] Construct Binary Tree from Inorder and Postorder Traversal
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
            int end=postorder.size()-1;
            TreeNode* root=buildTree(postorder,end,inorder,0,inorder.size()-1);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder,int &end, vector<int>& inorder,int start1,int end1) {
        TreeNode* root=NULL;
 
        if(preorder.size()>end)
        {
            vector<int>::iterator it=find(inorder.begin()+start1,inorder.begin()+end1+1,preorder[end]);
            if(it!=inorder.begin()+end1+1) 
            {
                 root=new TreeNode(preorder[end]);
                 end=end-1;
                  root->right=buildTree(preorder,end,inorder,it-inorder.begin()+1,end1);

                 root->left=buildTree(preorder,end,inorder,start1,it-inorder.begin()-1);

            }

        }
        return root;
       }
};

