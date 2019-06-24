/*
 * @lc app=leetcode id=103 lang=cpp
 *
 * [103] Binary Tree Zigzag Level Order Traversal
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        deque<TreeNode *> q;
        deque<TreeNode *> level;
        level.push_back(root);
        int flag=0;
        while(!level.empty())
        {
            
             while(!level.empty())
             {
                  TreeNode *t=level.front();
                  q.push_back(t);
                  level.pop_front();
             }
             if (!q.empty()) {
                vector<int> v;
                  deque<TreeNode *>::iterator it=q.begin();
                    while(it!=q.end())
                    {
                        if (*it!=NULL) {
                           v.push_back((*it)->val);
                        }

                    
                        it++;
                    }
                while(!q.empty())
                {
                  
                    TreeNode *t=NULL;
                  
                    {
                        t=q.back();
                    }
   
                    if (t!=NULL) {
                        
                        if (!flag) {
                      
                        level.push_back(t->right);
                        level.push_back(t->left);
                        }
                        else
                        {
                            level.push_back(t->left);
                            level.push_back(t->right);
                        }
                                      
                      
                    }

                 
                 
                    {
                        q.pop_back();
                    }
                    
                
                
                }
                if(!v.empty())
                {
                    res.push_back(v);
                }

                flag=1-flag;
                
             }
             
            
        }
       return res;
    }
};

