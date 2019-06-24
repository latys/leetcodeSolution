/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 *
 * https://leetcode.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (32.95%)
 * Total Accepted:    406.5K
 * Total Submissions: 1.2M
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * Write a function to find the longest common prefix string amongst an array
 * of strings.
 * 
 * If there is no common prefix, return an empty string "".
 * 
 * Example 1:
 * 
 * 
 * Input: ["flower","flow","flight"]
 * Output: "fl"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: ["dog","racecar","car"]
 * Output: ""
 * Explanation: There is no common prefix among the input strings.
 * 
 * 
 * Note:
 * 
 * All given inputs are in lowercase letters a-z.
 * 
 */
class Solution
{
  public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int j = 0;
        string res;
        if (strs.size() == 0)
            return "";
        while (1)
        {
            char last = '\0';
            for (int i = 0; i < strs.size(); i++)
            {

                if (j < strs.at(i).size())
                {
                    if (i == 0)
                    {
                        last = strs.at(0)[j];
                    }
                    else
                    {
                        if (strs.at(i)[j] != last)
                        {
                            return res;
                        }
                    }
                }
                else
                {
                    return res;
                }
            }
            res = res + last;
            j++;
        }

        return res;
    }
};
