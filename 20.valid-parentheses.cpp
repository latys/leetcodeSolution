/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 *
 * https://leetcode.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (35.80%)
 * Total Accepted:    509.3K
 * Total Submissions: 1.4M
 * Testcase Example:  '"()"'
 *
 * Given a string containing just the characters '(', ')', '{', '}', '[' and
 * ']', determine if the input string is valid.
 * 
 * An input string is valid if:
 * 
 * 
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 * 
 * 
 * Note that an empty string is also considered valid.
 * 
 * Example 1:
 * 
 * 
 * Input: "()"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "()[]{}"
 * Output: true
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: "(]"
 * Output: false
 * 
 * 
 * Example 4:
 * 
 * 
 * Input: "([)]"
 * Output: false
 * 
 * 
 * Example 5:
 * 
 * 
 * Input: "{[]}"
 * Output: true
 * 
 * 
 */
class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> m={{'(',')'},{'[',']'},{'{','}'}};
        stack<char> st;
        char stack_top='\0';
        if(s.size()%2!=0)
        return false;
        else
        {
            for(size_t i = 0; i < s.size(); i++)
            {
                if (stack_top=='\0') {
                   st.push(s[i]);
                    stack_top=s[i];
                }
                else
                {
                    if(m[stack_top]!=s[i])
                    {
                        st.push(s[i]);
                        stack_top=s[i];
                    }
                    else
                    {
                        if (!st.empty()) {
                            st.pop();
                         if (!st.empty()) 
                        {
                            stack_top=st.top();
                        }
                        
                        }

                    }
                }

            }
            
        }
        if (st.empty()) {
           return true;
        }
        else
        {
            return false;
        }
        
        

        
        
        
    }
};
