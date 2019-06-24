/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 *
 * https://leetcode.com/problems/length-of-last-word/description/
 *
 * algorithms
 * Easy (32.14%)
 * Total Accepted:    244.2K
 * Total Submissions: 759.7K
 * Testcase Example:  '"Hello World"'
 *
 * Given a string s consists of upper/lower-case alphabets and empty space
 * characters ' ', return the length of last word in the string.
 * 
 * If the last word does not exist, return 0.
 * 
 * Note: A word is defined as a character sequence consists of non-space
 * characters only.
 * 
 * Example:
 * 
 * Input: "Hello World"
 * Output: 5
 * 
 * 
 */
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.size();
        int j=len-1;
             while(j>=0&&s[j]==' ')
            {
                j--;
            }
            if (j<0) {
                return 0;
            }
            int i=j;
        for( i=j;i>=0;i--)
        {
 
            if(s[i]==' ')
            {
                return j-i;
            }
        }
        return j-i;
        
    }
};
