/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 *
 * https://leetcode.com/problems/implement-strstr/description/
 *
 * algorithms
 * Easy (31.14%)
 * Total Accepted:    378.1K
 * Total Submissions: 1.2M
 * Testcase Example:  '"hello"\n"ll"'
 *
 * Implement strStr().
 * 
 * Return the index of the first occurrence of needle in haystack, or -1 if
 * needle is not part of haystack.
 * 
 * Example 1:
 * 
 * 
 * Input: haystack = "hello", needle = "ll"
 * Output: 2
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: haystack = "aaaaa", needle = "bba"
 * Output: -1
 * 
 * 
 * Clarification:
 * 
 * What should we return when needle is an empty string? This is a great
 * question to ask during an interview.
 * 
 * For the purpose of this problem, we will return 0 when needle is an empty
 * string. This is consistent to C's strstr() and Java's indexOf().
 * 
 */
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0)
        return 0;
        if(needle.size()>haystack.size())
        return -1;

        int start=0;
        for(int i=0,j=0;i<haystack.size();)
        {
            if (haystack[i]==needle[j]) {
                /* code */
                i++;
                j++;
            }
            else
            {
                j=0;
                start++;
                i=start;
            }

            if(j==needle.size())
            {
                return start;
            }
            
            
        }

        return -1;
   
    }
};
