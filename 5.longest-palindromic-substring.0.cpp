/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 *
 * https://leetcode.com/problems/longest-palindromic-substring/description/
 *
 * algorithms
 * Medium (26.47%)
 * Total Accepted:    473.8K
 * Total Submissions: 1.8M
 * Testcase Example:  '"babad"'
 *
 * Given a string s, find the longest palindromic substring in s. You may
 * assume that the maximum length of s is 1000.
 * 
 * Example 1:
 * 
 * 
 * Input: "babad"
 * Output: "bab"
 * Note: "aba" is also a valid answer.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "cbbd"
 * Output: "bb"
 * 
 * 
 */
class Solution {
public:
    string longestPalindrome(string s) {
        int len=s.size();
        bool *p=new bool[len*len];
        int maxlen=0;
        string res="";

        for(int i=0;i<len;i++)
        {
            for(int j=0;j<len-i;j++)
            {
                if(i==0)
                {
                    *(p+j*len+j+i)=true;
                    maxlen=1;
                    res=(s[j]);

                }
                else if(i==1)
                {
                    if(s[j]==s[j+1])
                    {
                        *(p+j*len+j+i)=true;
                        maxlen=2;
                        res=s.substr(j,2);
                    }
                    else
                    {
                        *(p+j*len+j+i)=false;
                    }
                    
                }
                else
                {
                    *(p+j*len+j+i)=(*(p+(j+1)*len+j+i-1))&&(s[j]==s[j+i]);
                    if(*(p+j*len+j+i))
                    {
                        res=s.substr(j,i+1);
                    }
                }
                
                
            }
        }

        return res;

        
    }
};
