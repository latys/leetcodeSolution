/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 *
 * https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
 *
 * algorithms
 * Medium (26.64%)
 * Total Accepted:    762.4K
 * Total Submissions: 2.9M
 * Testcase Example:  '"abcabcbb"'
 *
 * Given a string, find the length of the longest substring without repeating
 * characters.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: "abcabcbb"
 * Output: 3 
 * Explanation: The answer is "abc", with the length of 3. 
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "bbbbb"
 * Output: 1
 * Explanation: The answer is "b", with the length of 1.
 * 
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: "pwwkew"
 * Output: 3
 * Explanation: The answer is "wke", with the length of 3. 
 * ⁠            Note that the answer must be a substring, "pwke" is a
 * subsequence and not a substring.
 * 
 * 
 * 
 * 
 * 
 */
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        unordered_map<char,int> ch;
        if(s.length()>0)
        {
            ch[s[0]]=0;
            maxlen=1;
        }
        
        for(int i=0, j=1;j<s.length();j++)
        {
            if(ch.count(s[j])>0)
            {
                 size_t k = i;
                i=ch[s[j]]+1;
                for(; k < ch[s[j]]+1; k++)
                {
                    /* code */
                    ch.erase(s[k]);
                }
                ch[s[j]]=j;
                
            }
            else
            {
                ch[s[j]]=j;
            }
            if(j-i+1>maxlen)
            {
                maxlen=j-i+1;
            }
           
          
        }


        return maxlen;
        
    }
};
