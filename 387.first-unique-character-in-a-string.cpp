/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 *
 * https://leetcode.com/problems/first-unique-character-in-a-string/description/
 *
 * algorithms
 * Easy (49.61%)
 * Total Accepted:    248.8K
 * Total Submissions: 501.4K
 * Testcase Example:  '"leetcode"'
 *
 * 
 * Given a string, find the first non-repeating character in it and return it's
 * index. If it doesn't exist, return -1.
 * 
 * Examples:
 * 
 * s = "leetcode"
 * return 0.
 * 
 * s = "loveleetcode",
 * return 2.
 * 
 * 
 * 
 * 
 * Note: You may assume the string contain only lowercase letters.
 * 
 */
class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> map;
        int i=0;
        for(char c:s)
        {
            if(map.count(c)>0)
               map[c]=-1;
            else 
              map[c]=i;

            i++;
        }
        for(char c:s)
        {
            if(map[c]!=-1)
              return map[c];
        }

        return -1;
    }
};

