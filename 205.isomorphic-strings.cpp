/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 *
 * https://leetcode.com/problems/isomorphic-strings/description/
 *
 * algorithms
 * Easy (36.78%)
 * Total Accepted:    189.3K
 * Total Submissions: 514.7K
 * Testcase Example:  '"egg"\n"add"'
 *
 * Given two strings s and t, determine if they are isomorphic.
 * 
 * Two strings are isomorphic if the characters in s can be replaced to get t.
 * 
 * All occurrences of a character must be replaced with another character while
 * preserving the order of characters. No two characters may map to the same
 * character but a character may map to itself.
 * 
 * Example 1:
 * 
 * 
 * Input: s = "egg", t = "add"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "foo", t = "bar"
 * Output: false
 * 
 * Example 3:
 * 
 * 
 * Input: s = "paper", t = "title"
 * Output: true
 * 
 * Note:
 * You may assume both s and t have the same length.
 * 
 */
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> map;
        unordered_map<char,char> map2;
        for(size_t i = 0; i < s.size(); i++)
        {
            if (!map.count(s[i])) {
             
                map[s[i]]=t[i];
            }
            else
            {
                if (t[i]!=map[s[i]]) {
                    return false;
                }
                
            }

             if (!map2.count(t[i])) {
             
                map2[t[i]]=s[i];
            }
            else
            {
                if (s[i]!=map2[t[i]]) {
                    return false;
                }
                
            }


            
            
        }
        return true;
        
    }
};

