/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 *
 * https://leetcode.com/problems/generate-parentheses/description/
 *
 * algorithms
 * Medium (53.10%)
 * Total Accepted:    301K
 * Total Submissions: 566.8K
 * Testcase Example:  '3'
 *
 * 
 * Given n pairs of parentheses, write a function to generate all combinations
 * of well-formed parentheses.
 * 
 * 
 * 
 * For example, given n = 3, a solution set is:
 * 
 * 
 * [
 * ⁠ "((()))",
 * ⁠ "(()())",
 * ⁠ "(())()",
 * ⁠ "()(())",
 * ⁠ "()()()"
 * ]
 * 
 */
class Solution {
public:
    vector<string> generateParenthesis(int n) {

        set<string> res;
        if(n==1)
        {
            res.insert("()");
            return vector<string>(res.begin(),res.end());
        }

        if(n>1)
        {
            vector<string> tmp=generateParenthesis(n-1);
            //for(int i=0;i<3;i++)
            {
                for(string s:tmp)
                {
                    string l="()"+s;
                    string m="("+s+")";
                    string r=s+"()";
                    res.insert(m);
                    res.insert(r);
                    // if(i==0)
                    // {
                    //     res.push_back(m);
                    // }
                    // if(i==1)
                    // {
                    //      res.push_back(r);
                    // }
                    // else
                    // {
                            
                    // if(r!=l)
                    // {
                    //     res.push_back(l);
                    // }
                    // }
                    
                    
                    //res.push_back(l);
                    
                    //if(r!=l)
                    {
                        res.insert(l);
                    }
                }
            }
      
        }

        
        return vector<string>(res.begin(),res.end());
        
    }
};

